#include "../includes/CalcProcess.hpp"
#include "../libs/mathlibs/includes/ArithmaticOperations.hpp"
#include "../libs/uiolibs/includes/getUInput.hpp"

using namespace Calc;

CalcProcess::CalcProcess() {}

int CalcProcess::addint(const int first, const int second) {
  return mathlibs::AddInit(first, second);
}

void CalcProcess::Addition() {
  cout << "Enter the numbers, you want to add? " << endl;
  int firstui = userinput::getInit();
  int secondui = userinput::getInit();
  int result = addint(firstui, secondui);
}
