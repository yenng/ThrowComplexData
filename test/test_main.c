#include "unity.h"
#include "main.h"
#include "CException.h"
#include "ErrorObject.h"
#include <malloc.h>

void setUp(void){}

void tearDown(void){}

void test_doThing(void){
	ErrorObject *err;
  
  Try{
    doThing();
    TEST_FAIL_MESSAGE("Expect ERR_DUNNO_WHAT_HAPPEN to be thrown," \
                      "But none thrown.");
 }Catch(err){
   TEST_ASSERT_EQUAL_STRING("Hey! Something is really wrong here. ", err->errorMsg);
   freeError(err);
 }
}

void test_specialAdd_given_minus5_and_11_should_return_6(void){
	int result = specialAdd(-5,11);
  TEST_ASSERT_EQUAL(6,result);
}

void test_specialAdd_given_5_and_11_should_return_16(void){
	ErrorObject *err;
	  Try{
    int result = specialAdd(5,11);
    TEST_FAIL_MESSAGE("Expect ERR_NUMBER_NOT_NEGATIVE to be thrown," \
                      "But none thrown.");
    TEST_ASSERT_EQUAL(16,result);
 }Catch(err){
   TEST_ASSERT_EQUAL_STRING("negVal is not negative!", err->errorMsg);
   freeError(err);
 }
}

void test_specialAdd_given_minus5_and_minus11_should_return_16(void){
	ErrorObject *err;
	  Try{
    int result = specialAdd(-5,-11);
    TEST_FAIL_MESSAGE("Expect ERR_NUMBER_NOT_POSITIVE to be thrown," \
                      "But none thrown.");
    TEST_ASSERT_EQUAL(-16,result);
 }Catch(err){
   TEST_ASSERT_EQUAL_STRING("posVal is not positive!", err->errorMsg);
   //printf("%s\n", err->errorMsg);
   freeError(err);
 }
}


void test_specialAdd_given_minus5_and_51_should_return_16(void){
	ErrorObject *err;
	  Try{
    int result = specialAdd(-5,51);
    TEST_FAIL_MESSAGE("Expect ERR_NUMBER_NOT_POSITIVE to be thrown," \
                      "But none thrown.");
    TEST_ASSERT_EQUAL(46,result);
 }Catch(err){
   TEST_ASSERT_EQUAL_STRING("posVal is larger than 50!", err->errorMsg);
   freeError(err);
 }
}