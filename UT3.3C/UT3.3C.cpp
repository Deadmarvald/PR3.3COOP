#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.3C/Money.cpp"
#include "../PR3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT33C
{
	TEST_CLASS(UT33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money t(1, 1);

			int count = Object::Count();
		
			Assert::AreEqual(count, 1);
		}
	};
}