#include "pch.h"
#include "CppUnitTest.h"
#include "../../Lab2.5/Lab2.5/Fraction.h"
#include "../../Lab2.5/Lab2.5/Fraction.cpp"
#include "../../Lab2.5/Lab2.5/Pair.h"
#include "../../Lab2.5/Lab2.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1, 5), b(1, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}
