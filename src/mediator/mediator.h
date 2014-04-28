/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_MEDIATOR_H_
#define MEDIATOR_MEDIATOR_H_

#include <vector>
using std::vector;
#include <algorithm>
#include "mediator/colleague_event.h"

namespace mediator {
template<typename EventArgType>
class ColleagueEvent;

template<typename EventArgType>
class Mediator {
 public:
  typedef vector<ColleagueEvent<EventArgType>* > EventList;
  virtual ~Mediator() {}

 private:
  EventList colleagues;
  static Mediator<EventArgType> *instance;
  static Mediator<EventArgType>& GetInstance() {
    if (!instance) {
      instance = new Mediator();
    }
    return *instance;
  }
  void RegisterColleague(ColleagueEvent<EventArgType> *col_event) {
    colleagues.push_back(col_event);
  }
  void FireEvent(ColleagueEvent<EventArgType> *source, EventArgType event_arg) {
    for (unsigned int i = 0; i < colleagues.size(); ++i) {
      if (colleagues[i] != source) {
        colleagues[i]->handlerProc(source->event_context, event_arg,
                                   colleagues[i]->event_context);
      }
    }
  }
  void UnregisterColleague(ColleagueEvent<EventArgType> *col_event) {
    typename EventList::iterator it = find(colleagues.begin(), colleagues.end(),
                                  col_event);
    if (it != colleagues.end()) {
      colleagues.erase(it);
    }
  }
  friend class ColleagueEvent<EventArgType>;
};

template <typename EventArgType>
Mediator<EventArgType>* Mediator<EventArgType>::instance = NULL;
}  // namespace mediator
#endif  // MEDIATOR_MEDIATOR_H_
