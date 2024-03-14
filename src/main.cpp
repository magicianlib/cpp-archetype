// clang-format off
#include "work.h"
#include "sub/sub.h"

#include "3rd/constant.h"

#include <sys/netport.h>

#include <iostream>

// clang-format on

int main() {
  Work w{};

  std::cout << "Hello, World!" << constant::gravity << std::endl;
  return 0;
}
