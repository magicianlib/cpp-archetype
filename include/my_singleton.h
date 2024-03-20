#ifndef MY_SINGLETON_H
#define MY_SINGLETON_H

#include "singleton.h"

class MySingletonClass : public Singleton<MySingletonClass> {
  friend class Singleton<MySingletonClass>;

 public:
  void doSomething();

 private:
  MySingletonClass();

  int value_{};
};

#endif  // MY_SINGLETON_H
