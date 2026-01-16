#include <iostream>

using namespace std;

//Create a struct for grouping values of different types together
struct house_description
{
    int house_number;
    string street_name;
    string house_color;
    double house_sqft;
};


// Create a function to print an address to the console
// The function receives a struct and returns nothing
void print_address(house_description input_variable)
{
    cout << input_variable.house_number << " " << input_variable.street_name << endl;
}


int main()
{

// Create a variable of type house_description
    house_description Joes_house;

// Use dot notation to access the members of Joes_house
    Joes_house.house_number = 2577;
    Joes_house.street_name = "Elm Street";
    Joes_house.house_color = "Red";
    Joes_house.house_sqft = 2334.5;

// Call the function to print Joes_house adress
    print_address(Joes_house);

    return 0;

}