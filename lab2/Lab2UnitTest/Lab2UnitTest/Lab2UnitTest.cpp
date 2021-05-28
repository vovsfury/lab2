#include "pch.h"
#include "CppUnitTest.h"
#include "../../lab2/lab2/lab2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab2UnitTest
{
	TEST_CLASS(Lab2UnitTest)
	{
	public:
		
		TEST_METHOD(code_and_decode)
		{
			string input = "parrot flys";
			Sifer new_str(input);
			string ans1 = "1101011111111101010001110110010001000";
			string ans2 = "parrot flys";
			Assert::AreEqual(ans1, new_str.get_code());
			Assert::AreEqual(ans2, new_str.get_decode());
		}

		TEST_METHOD(code_and_decode2)
		{
			string input = "cat walks";
			Sifer new_str(input);
			string ans1 = "110111101100011111010001000";
			string ans2 = "cat walks";
			Assert::AreEqual(ans1, new_str.get_code());
			Assert::AreEqual(ans2, new_str.get_decode());
		}

		TEST_METHOD(compression)
		{
			string input = "parrot flys";
			Sifer new_str(input);
			double a = 11*8;
			double b = 37;
			double ans = a / b;
			Assert::AreEqual(ans, new_str.get_compression_ratio());
		}

		TEST_METHOD(except)
		{
			string input = "aaa";
			bool a = 1;
			try
			{
				Sifer new_strS(input);
				a = 0;
			}
			catch (invalid_argument& exception) {}
			Assert::IsTrue(a);
		}
	};

}
