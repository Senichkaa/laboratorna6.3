#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.6.3.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0, -1, 4, 8 };
			SumElements(A, 4);
			Assert::AreEqual(-1, A[1]);
		}
	};
}
