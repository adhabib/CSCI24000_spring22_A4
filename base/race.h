//race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "horse.h"

class Race {
  private:
    int i; // counter for loops and index
    int length; // track length, will be 15
    Horse h[5]; // create array for horse objects
  public:
    Race(); // set length for race
    void printLane(); // print lanes
    void nextStep(); // advance race
}; // end class definition

#endif
