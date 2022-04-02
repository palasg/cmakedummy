#include<gtest/gtest.h>

#include"CalcProcess.hpp"
#include"ArithmaticOperations.hpp"

//using namespace Calc;

TEST(CalcProcessTest,addition)
{
	Calc::CalcProcess calObj;
	EXPECT_EQ(calObj.addint(1,2), 3);
}

TEST(ArithmaticOperationsTest, addtest)
{
EXPECT_EQ(mathlibs::AddInit(1,2),3);
}
