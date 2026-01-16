
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream> 
#include <string>
using namespace std; 
 
// [1] Create a class (Student) with data members name and score.

// [2] Declare a standard constructor and an alternate constructor.
//     [2A] The alternate constructor has parameters for name and score.

// [3] Include a getter-function and a setter-function for 
//     the data member 'score'.

// [4] Include a getter-function and a setter-function for
//     the data member 'name'.




class Student  
{
public:
    Student();
    Student(string n, int s);
    ~Student();

    void set_score();
    int get_score();


private:
    int score;
    string name;
};
#endif 
