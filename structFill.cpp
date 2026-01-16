#include <iostream>
#include <string>

using namespace std;

//Create a struct for grouping values of different types together
    struct employee
    {
        int ID;
        double salary;
        string jobtitle;
    };


int main()
{
// create an object of type "employee"
    employee emp1;

// use cin to extract information from the user
    cout << "Please enter employee information: " << endl;
    cout << "ID Number: ";
    cin >> emp1.ID;

    cout << "Salary: ";
    cin >> emp1.salary;
    cin.ignore(10, '\n');
// cin.ignore (10, '/n') is
// a function call that extracts and discards characters from
// the input stream (cin) until one of two conditions is met:
// 10 characters have been extracted and discarded, or
// a newline character (\n) has been encountered and discarded. 

    cout << "Job Title: ";
    //cin >> emp1.jobtitle;
    getline(cin, emp1.jobtitle);



// output to the console the information just entered:
    cout << endl;
    cout << "This is employee1: " << endl;

    cout << "ID Number: " << emp1.ID << endl;
    cout << "Salary: " << emp1.salary << endl;
    cout << "Job Title: " << emp1.jobtitle << endl;

    return 0;
}