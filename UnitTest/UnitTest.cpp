#include "pch.h"
#include "CppUnitTest.h"
#include "../DMVQueue/DMVQueue.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int num = 5;
			Queue q = Queue(num);
			Assert::AreEqual(num, q.get_line());
		}
	};
}
