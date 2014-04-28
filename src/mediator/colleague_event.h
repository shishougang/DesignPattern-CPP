/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_COLLEAGUE_EVENT_H_
#define MEDIATOR_COLLEAGUE_EVENT_H_

#include "mediator/colleague.h"
#include "mediator/mediator.h"

namespace mediator {
template<typename EventArgType>
class ColleagueEvent {
 public:
  typedef void (*ColleagueEventHandler) (Colleague *source,
                                         EventArgType event_arg,
                                         Colleague *context);
  ColleagueEvent(Colleague *source, ColleagueEventHandler event_proc)
      : event_context(source), handlerProc(event_proc) {
    Mediator<EventArgType>::GetInstance().RegisterColleague(this);
  }
  virtual ~ColleagueEvent() {
    Mediator<EventArgType>::GetInstance().UnregisterColleague(this);
  }
  void FireEvent(EventArgType event_arg) {
    Mediator<EventArgType>::GetInstance().FireEvent(this, event_arg);
  }
 private:
  Colleague *event_context;
  ColleagueEventHandler handlerProc;
  friend class Mediator<EventArgType>;
};
}  // namespace mediator
#endif  // MEDIATOR_COLLEAGUE_EVENT_H_
