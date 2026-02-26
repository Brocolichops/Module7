#include "pch.h"
#include "CppUnitTest.h"
#include "../testdriven.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(guessAnimal(0, false, true), STR_FISH, true);
			//more test cases

		}
	};
}
