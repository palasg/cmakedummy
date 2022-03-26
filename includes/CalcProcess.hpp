#pragma once
#include <iostream>

using std::cout;
using std::endl;

namespace Calc {
class CalcProcess {
public:
  CalcProcess();

  void Addition();

  ~CalcProcess();
  int addint(const int first, const int second);
private:
  int sum = 0;
};

} // namespace Calc
