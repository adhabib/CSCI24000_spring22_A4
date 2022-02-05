Goal: Create a horse race, using object oriented programming. A Horse class, race class, main function,
a race object and five horse objects

input: random seed

output: a winner

We will want to create a horse class, with a position integer which is private. From here on, everything is
publice It will be set to 0 using a constructor. A method will be made to pull a random number to move the horse, if it is 0, does not advance. If 1, it will advance. Add one to the position. We will also make a 
getter for the position.
Next we make the race class, where we have private integer i to serve as a counter for the index of the 
horse object array, which we also have set up here, privately. The length of the race is also set up, 
privately. From here on, public. It will be set to 15 using a constructor for the race. We will have a 
method for printing lanes, which will for loop through the index of the horse array. The amount of spots the
horse has moved will be the amount of dots printed behind it. Print the icon for the horse unless it has 
finished. Print the dots ahead, which will be 14 minus the amount of spots the horse has moved. New lines.
We then have the method for controlling the race, let us say it is called nextstep. It will for loop each index, and call the advance method 
from the horse class. It checks to see if the horse has finished, if yes, end the race. If the index has 
reached past 4, reset it to -1
In our main function we create a race object, ask for a seed from the user, use it in srand(), and we call 
the nextstep method from the race class. Every necessary method for the program is in this method.
