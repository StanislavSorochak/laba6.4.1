#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.4.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			double a[5]{ 1.4,-0.43,-1.9,1.2,1.1 };
			c = Min(a, 5);
			Assert::AreEqual(c, -1.9);
		}
	};
}
