#include "../includes/CalcProcess.hpp"
#include "../libs/mathlibs/includes/ArithmaticOperations.hpp"
#include "../libs/uiolibs/includes/getUInput.hpp"

namespace Calc {

CalcProcess::CalcProcess() {
  //ctor
}

int CalcProcess::addint(const int first, const int second) {
  return mathlibs::AddInit(first, second);
}

void CalcProcess::Addition() {
  cout << "Enter the numbers, you want to add? " << endl;
  int firstui = userinput::getInit();
  int secondui = userinput::getInit();
  int result = addint(firstui, secondui);
}
CalcProcess::~CalcProcess() {
  // dtor;
}

} // namespace Calc
