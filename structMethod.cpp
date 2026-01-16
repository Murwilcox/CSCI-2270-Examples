
#include <iostream>
#include <string>

using namespace std;

// Define a struct named 'Book'
struct Book 
{
    // Data members (attributes)
    string title;
    string author;
    int yearPublished;

    // Member function (method) to display book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << yearPublished << endl;
    }
};

int main() 
{
    // Create an instance (object) of the Book struct
    Book myBook;
    myBook.title = "The Hitchhiker's Guide to the Galaxy";
    myBook.author = "Douglas Adams";
    myBook.yearPublished = 1979;

    // Call the method associated with the struct instance
    myBook.displayDetails();

    return 0;
}
