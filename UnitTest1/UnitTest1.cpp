#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2 it/Lab 6.2 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 614, -357, -781, 969, 482, 243, 693, 610, -719, -550 };
			int c = findSmallestIndex(a, 10, -1, INT_MAX);
			Assert::AreEqual(c, 2);
		}
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 614, -357, -781, 969, 482, 243, 693, 610, -719, -550 };
			int t = findSmallestIndex(a, 10, -1, INT_MIN);
			Assert::AreEqual(t, 3);
		}
	};
}
