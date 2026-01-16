// Create the source file.

// The source file should contain all the
//  function definitions for the function declarations
//   mentioned in the header file. 

// The standard constructor should assign
//   "dinosaur" to name, and 9999 to score.

// The alternate constructor should take arguments
//  for name and score.

// The setter-functions should ask for user input
//   to assign values to name and score.

// The getter-functions should just return name and score.




#include "student.h"

Student :: Student()  //this is the default constructor function
{
    score = 9999;
    name = "dinosaur";
}


Student :: Student(string n, int s) //this is an alternate constructor
{
    score = s;
    name = n;
}

Student :: ~Student()
{
    cout << "Objects destroyed." << endl;
}


void Student :: set_score()
{
    cout << "score: ";
    cin >> score;
} 


int Student :: get_score() 
{
    return score;
}
