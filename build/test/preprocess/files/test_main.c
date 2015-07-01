#include "ErrorObject.h"
#include "CException.h"
#include "main.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}



void test_doThing(void){

 ErrorObject *err;



  { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1){

    doThing();

    UnityFail( ("Expect ERR_DUNNO_WHAT_HAPPEN to be thrown," "But none thrown."), (_U_UINT)17);

                                         ;

 }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)){

   UnityAssertEqualString((const char*)("Hey! Something is really wrong here. "), (const char*)(err->errorMsg), (((void *)0)), (_U_UINT)19);

   freeError(err);

 }

}



void test_specialAdd_given_minus5_and_11_should_return_6(void){

 int result = specialAdd(-5,11);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)26, UNITY_DISPLAY_STYLE_INT);

}



void test_specialAdd_given_5_and_11_should_return_16(void){

 ErrorObject *err;

   { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1){

    int result = specialAdd(5,11);

    UnityFail( ("Expect ERR_NUMBER_NOT_NEGATIVE to be thrown," "But none thrown."), (_U_UINT)34);

                                         ;

    UnityAssertEqualNumber((_U_SINT)((16)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

 }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)){

   UnityAssertEqualString((const char*)("negVal is not negative!"), (const char*)(err->errorMsg), (((void *)0)), (_U_UINT)37);

   freeError(err);

 }

}



void test_specialAdd_given_minus5_and_minus11_should_return_16(void){

 ErrorObject *err;

   { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1){

    int result = specialAdd(-5,-11);

    UnityFail( ("Expect ERR_NUMBER_NOT_POSITIVE to be thrown," "But none thrown."), (_U_UINT)47);

                                         ;

    UnityAssertEqualNumber((_U_SINT)((-16)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

 }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)){

   UnityAssertEqualString((const char*)("posVal  is not positive!"), (const char*)(err->errorMsg), (((void *)0)), (_U_UINT)50);



   freeError(err);

 }

}





void test_specialAdd_given_minus5_and_51_should_return_16(void){

 ErrorObject *err;

   { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1){

    int result = specialAdd(-5,51);

    UnityFail( ("Expect ERR_NUMBER_NOT_POSITIVE to be thrown," "But none thrown."), (_U_UINT)62);

                                         ;

    UnityAssertEqualNumber((_U_SINT)((46)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

 }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)){

   UnityAssertEqualString((const char*)("posVal is larger than 50!"), (const char*)(err->errorMsg), (((void *)0)), (_U_UINT)65);

   freeError(err);

 }

}
