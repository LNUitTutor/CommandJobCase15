#include "pch.h"
#include "CppUnitTest.h"
#include "..\ClassesHierarchy\Classes.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(TestBase)
	{
	public:
		
		TEST_METHOD(TestParamCreation)
		{
			Base a(5);
			Assert::AreEqual(5, a.getA());
		}
		TEST_METHOD(TestDefaultCreation)
		{
			Base a;
			Assert::AreEqual(0, a.getA());
		}
	};
}
