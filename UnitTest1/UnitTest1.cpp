#include "pch.h"
#include "CppUnitTest.h"
#include "../3.1/Triad.h"
#include "../3.1/Date.h"
#include "../3.1/Date.cpp"
#include "../3.1/Triad.h"
#include "../3.1/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad a(1, 2, 3);
			Assert::AreEqual(a > 0, true);
		}
	};
}
