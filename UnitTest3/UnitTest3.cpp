#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <cmath>
#include "D:\унік\ГРИГОРОВИЧ\коди\lab5.3\lab5.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x, z;
			x = 10;
			z = (cos(x) + 1) / (exp(x));
			double ExpectedValue = h(x);

			Assert::AreEqual(z, ExpectedValue, 0.01);
		}
	};
}
