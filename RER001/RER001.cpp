#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*length, int*width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);





using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RER001
{
	TEST_CLASS(RER001)
	{
	public:
		
		TEST_METHOD(GetPerimeterTest)
		{
			int result = 0;
			int length = 5;
			int width = 4;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(18, result);
		}

		TEST_METHOD(GetAreaTest)
		{
			int result = 0;
			int length = 5;
			int width = 4;
			result = getArea(&length, &width);
			Assert::AreEqual(20, result);
		}

		TEST_METHOD(GetLengthTest1)
		{
			int length = 0;
			int input = 16;
			setLength(input, &length);
			Assert::AreEqual(16, length);
		}

		TEST_METHOD(GetLengthTest2)
		{
			int length = 1;
			int input = 24;
			setLength(input, &length);
			Assert::AreEqual(24, length);
		}

		TEST_METHOD(GetLengthTest3)
		{
			int length = 8;
			int input = 74;
			setLength(input, &length);
			Assert::AreEqual(74, length);
		}

		TEST_METHOD(GetWidthTest1)
		{
			int width = 0;
			int input = 16;
			setLength(input, &width);
			Assert::AreEqual(16, width);
		}

		TEST_METHOD(GetWidthTest2)
		{
			int width = 1;
			int input = 28;
			setLength(input, &width);
			Assert::AreEqual(27, width);
		}

		TEST_METHOD(GetWidthTest3)
		{
			int width = 8;
			int input = 95;
			setLength(input, &width);
			Assert::AreEqual(95, width);
		}
	}
}
