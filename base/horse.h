//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// create class
class Horse {
  private:
    int position; // position of where the horse is
    friend class Race; 
    friend int main(); // create friend classes so they can access position
  public:
    Horse();
    void advance(); // declare
    //void setPosition(int position);
    int getPosition(); // declare
}; // end class def

#endif
