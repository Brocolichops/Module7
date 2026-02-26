#include "pch.h"
#include "CppUnitTest.h"
#include "../testdriven.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(FishTest) {
			int legs = 0;
			bool fly = false;
			bool aquatic = true;
			Assert::AreEqual(STR_FISH, guessAnimal(legs, fly, aquatic), L"guessAnimal() failed");
		};
		TEST_METHOD(FrogTest) {
			int legs = 4;
			bool fly = false;
			bool aquatic = true;
			Assert::AreEqual(STR_FROG, guessAnimal(legs, fly, aquatic), L"guessAnimal() failed");
		};
		TEST_METHOD(BirdTest) {
			int legs = 2;
			bool fly = true;
			bool aquatic = false;
			Assert::AreEqual(STR_BIRD, guessAnimal(legs, fly, aquatic), L"guessAnimal() failed");
		};
		TEST_METHOD(InsectTest) {
			int legs = 6;
			bool fly = true;
			bool aquatic = false;
			Assert::AreEqual(STR_INSECT, guessAnimal(legs, fly, aquatic), L"guessAnimal() failed");
		};
		TEST_METHOD(DogTest) {
			int legs = 4;
			bool fly = false;
			bool aquatic = false;
			Assert::AreEqual(STR_DOG, guessAnimal(legs, fly, aquatic), L"guessAnimal() failed");
		}
		TEST_METHOD(UnknownTest) {
			int legs = 15;
			bool fly = true;
			bool aquatic = true;
			Assert::AreEqual(STR_UNKNOWN, guessAnimal(legs, fly, aquatic), L"guessAnimal() failed");
		};
	};
}
