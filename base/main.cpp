//main.cpp
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "horse.h"
#include "race.h"

int main(){
  // declare a race object
  Race theRace;

  // declare variable for srand
  int x;
  std::cout << "Please enter a random number for the seed: "; // Get a seed
  std::cin >> x; // Get user input from the keyboard
  // get seeded
  srand(x);
  // start race
  theRace.nextStep();

  return 0;
} // end function
