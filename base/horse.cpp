//horse.cpp


#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "horse.h"

Horse::Horse(){
  Horse::position = 0;
} // end constructor

int Horse::getPosition(){
  return position;
} // end getter

void Horse::advance(){
  //generate random 0 or 1
  int tossCoin = rand()%2;
  if (tossCoin == 1){
  //advance horse one step
  position = position + 1;
  } //end if
} // end advance

