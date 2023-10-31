#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6.3it/LAB6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 8, 2, 3, 56, 5, 6 };
			int n = 6;

			double z = findMin1(a, n);
			Assert::AreEqual(z, 2.0);
		}
	};
}
