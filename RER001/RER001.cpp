#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*length, int*width);
extern "C" int getArea(int* length, int* width);

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
	};
}
