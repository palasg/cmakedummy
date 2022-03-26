#include<gtest/gtest.h>

#include"CalcProcess.hpp"

//using namespace Calc;

TEST(CalcProcessTest,addition)
{
	Calc::CalcProcess calObj;
	EXPECT_EQ(calObj.addint(1,2), 3);
}
