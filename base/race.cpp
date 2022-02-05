//race.cpp

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "horse.h"
#include "race.h"

Race::Race(){
  Race::length = 15;
} // end constructor

// advance race
void Race::nextStep(){
  for (i = 0; i < 5; i++){
    h[i].getPosition();
  } // end for
  for (i = 0; i < 6; i++){
    h[i].advance();
    //print progress so far if in last index of array
    if (i == 4){
      Race::printLane();
    } // end if
    // if a horse has finished, end
    if (h[i].position == Race::length){
      Race::printLane();
      std::cout << "Horse " << i << " wins!" << std::endl;
      break;
    } // end if
    // if array has been looped, reset to beginning index
    else if (i > 4){
      i =-1;
    } // end else if
  } // end for
} // end function

void Race::printLane(){
  // declare variables for each lane on track
  int p;
  int behindStep;
  int aheadStep;
  // for loop each lane on track
  for (p = 0; p < 5; p++){
    for (behindStep = 0; behindStep < h[p].position; behindStep++){
      // print track behind horse
      std::cout << ".";
    } // end for
    // print horse, skip if horse at end
    if (behindStep < Race::length){
      std::cout << " " << p;
    } // end if
    // print track ahead of horse
    for (aheadStep = 0; aheadStep < 14 - h[p].position; aheadStep++){
      std::cout << ".";
    } // end for
    std::cout << std::endl;
  } // end for
  std::cout << std::endl;
} // end
