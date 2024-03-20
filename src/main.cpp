// clang-format off
#include "work.h"
#include "my_singleton.h"

#include "3rd/constant.h"

#include <iostream>

// clang-format on

int main() {
  Work w{};

  MySingletonClass::instance().doSomething();
  MySingletonClass::instance().doSomething();

  std::cout << "Hello, World!" << constant::gravity << std::endl;
  return 0;
}
