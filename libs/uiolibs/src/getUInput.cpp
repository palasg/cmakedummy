
#include "../includes/getUInput.hpp"
#include <iostream>

// using namespace userinput;
using std::cin;
using std::cout;
using std::endl;

int userinput::getInit() {
  int uin;

  cout << "Pls enter a valid integer " << std::endl;

  cin >> uin;

  return uin;
}
