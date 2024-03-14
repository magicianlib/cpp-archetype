// clang-format off
#include "work.h"

#include "sub/sub.h"
#include "3rd/constant.h"

#include <iostream>

// clang-format on

Work::Work() {
  std::cout << constant::gravity << '\n';
  std::cout << "work" << '\n';
}