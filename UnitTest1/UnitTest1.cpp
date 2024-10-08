#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.0;
			double expected = 1.0; 
			double actual = y(x);
			Assert::AreEqual(expected, actual, 1e-5);
		}
	};
}
