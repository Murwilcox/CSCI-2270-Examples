// Now we create a driver file. 

// All driver files are different. In this particular driver file:

// [1] Create a student object named "Alan".

// [2] Create Student objects named "Bob", "Cari", and "Don",
//     with scores of 85, 90, and 95. 

// [3] Output Alan's score to the console (should be 9999).

// [4] Create an array, named "list", that contains the objects: Bob, Cari, Don.

// [5] Output the score of the second element of "list" to the console (should be 90).

// [6] Create an array, named "list2", of type Student that can hold 4 of these objects.

// [7] Output the name of the 4th element found in List2 (should be dinosaur).

// [8] After you get question 7 finished AND you can compile these multiple files,
//     then run the code. Your output should be:    9999
//                                                  90
//                                                  dinosaur






#include "student.h"

int main()
{


// [1] Create a student object named "Alan".
    Student Alan;







// [2] Create Student objects named "Bob", "Cari", and "Don",
//     with scores of 85, 90, and 95.
    Student Bob = Student("Bob", 85);
    Student Cari = Student("Cari", 90);
    Student Don = Student("Don", 95);









// [3] Output Alan's score to the console.
    cout << Alan.get_score() << endl;

// should be the default score 9999.






// [4] Create an array, named "list", that contains the objects: Bob, Cari, Don.
    Student list[3] = {Bob, Cari, Don};









// [5] Output the score of the second element of "list" to the console.
    cout << list[1].get_score() << endl;

    // the score of the object-Cari is inserted into the stream.










// [6] Create an array, named "list2",
//     of type Student that can hold 4 Student objects.
    Student list2[4];






// [7] Output the name of the 4th element found in List2.
    //cout << list2[3].get_name() << endl;

// The above syntax will answer question 7, BUT...
// Both student.h and student.cpp will need to be changed.
// This is because we currently do not have a setter-function or
//  a getter-function, declared or defined, that will provide a
//   "name" for a created object. Add those now, then complete question 8.











// [8] After you get question 7 finished AND you can compile these multiple files,
//     then run the code. Your output should be:    9999
//                                                  90
//                                                  dinosaur

// P.S. How many objects were created in this snippet of code?

    return 0;
}
