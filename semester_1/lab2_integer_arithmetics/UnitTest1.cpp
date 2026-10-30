#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2/MyFunctions.h"
#include "../lab2/MyFunctions.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
      
        TEST_METHOD(TestMethod_IsPrime)
        {
            Assert::IsFalse(isPrime(1));   
            Assert::IsFalse(isPrime(-7));  
            Assert::IsTrue(isPrime(2));    
            Assert::IsTrue(isPrime(983));   
            Assert::IsFalse(isPrime(8));   
        }

        TEST_METHOD(TestMethod_HasUniqueDigits)
        {
            Assert::IsTrue(UniqueDigits(123));  
            Assert::IsFalse(UniqueDigits(55));  
            Assert::IsTrue(UniqueDigits(8));    
            Assert::IsFalse(UniqueDigits(303)); 
        }
    };
}