/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_doThing(void);
extern void test_specialAdd_given_minus5_and_11_should_return_6(void);
extern void test_specialAdd_given_5_and_11_should_return_16(void);
extern void test_specialAdd_given_minus5_and_minus11_should_return_16(void);
extern void test_specialAdd_given_minus5_and_51_should_return_16(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_main.c");
  RUN_TEST(test_doThing, 11);
  RUN_TEST(test_specialAdd_given_minus5_and_11_should_return_6, 24);
  RUN_TEST(test_specialAdd_given_5_and_11_should_return_16, 29);
  RUN_TEST(test_specialAdd_given_minus5_and_minus11_should_return_16, 42);
  RUN_TEST(test_specialAdd_given_minus5_and_51_should_return_16, 57);

  return (UnityEnd());
}