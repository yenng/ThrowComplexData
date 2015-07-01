#include "main.h"
#include "CException.h"
#include "ErrorObject.h"
#include <stdlib.h>

int shouldfail=1;

void doThing(){
  //CEXCEPTION_T err;
  //ErrorObject errObj;
  ErrorObject *err;
  
 // Try{
    doSomething();
 // }Catch(err){
   // printf("The error is %s\n", err->errorMsg);
   // freeError(err);
 // }
  
}

int doSomething(){
  //ErrorObject *errObj = malloc(sizeof(ErrorObject));
  
  if(shouldfail){
    ThrowError("Hey! Something is really wrong here. ",\
                ERR_DUNNO_WHAT_HAPPEN);
  /*  errObj->errorMsg = "Hey! Something is really wrong here. ";
    errObj->errorCode = ERR_DUNNO_WHAT_HAPPEN;
    Throw(errObj);*/
    
  }
  return 1;
}

/*
  if negVal is not negative, ERR_NUMBER_NOT_NEGATIVE,
  if posVal is not positive, ERR_NUMBER_NOT_POSITIVE,
  if posVal is larger than 50 , ERR_NUMBER_TOO_LARGE,
*/
int specialAdd(int negVal, int posVal){
  if(negVal >= 0){
    ThrowError("negVal is not negative!", ERR_NUMBER_NOT_NEGATIVE);
  }
  if (posVal <=0){
    ThrowError("posVal is not positive!", ERR_NUMBER_NOT_POSITIVE);
  }
  else if (posVal > 50){
    ThrowError("posVal is larger than 50!", ERR_NUMBER_TOO_LARGE);    
  }
  return negVal + posVal;
}





