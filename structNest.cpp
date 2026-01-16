#include <iostream>

using namespace std;

int main()
{
//Create a struct for grouping values of different types together
    struct house_description
    {
        int house_number;
        string street_name;
        string house_color;
        double house_sqft;
    };

// Create a variable of type house_description
    house_description Joes_house;

// Use dot notation to access the members of Joes_house
    Joes_house.house_number = 2577;
    Joes_house.street_name = "Elm Street";
    Joes_house.house_color = "Red";
    Joes_house.house_sqft = 2334.5;

// Create a stuct with a struct member
struct Person
{
    string name;
    house_description primary_residence;
    house_description business_office;
};
// creat a variable of type Person
    Person Dani;

// Access the nested member
    Dani.primary_residence = Joes_house;
    cout << Dani.primary_residence.house_color << endl;


    return 0;
}