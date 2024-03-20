#include "my_singleton.h"

#include <iostream>

void MySingletonClass::doSomething() {
  std::cout << "doSomething：" << (++value_) << '\n';
}

MySingletonClass::MySingletonClass() = default;