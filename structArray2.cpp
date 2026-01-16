#include <iostream>

using namespace std;

// This is an example of a struct containing an array

int main()
{
//Create a struct for grouping values of different types together
    struct house_description
    {
        int house_number;
        string street_name;
        string house_color;
        double house_sqft;
        double taxes[12];
    };

// Create a variable of type house_description
    house_description Joes_house;

// Use dot notation to access the members of Joes_house
    Joes_house.house_number = 2577;
    Joes_house.street_name = "Elm Street";
    Joes_house.house_color = "Red";
    Joes_house.house_sqft = 2334.5;
    Joes_house.taxes[0] = 13.2;
    Joes_house.taxes[1] = 13.4;
    Joes_house.taxes[2] = 13.7;
    Joes_house.taxes[3] = 13.7;
    Joes_house.taxes[4] = 13.8;
    Joes_house.taxes[5] = 14.1;
    Joes_house.taxes[6] = 14.15;
    Joes_house.taxes[7] = 14.25;
    Joes_house.taxes[8] = 15.1;
    Joes_house.taxes[9] = 15.6;
    Joes_house.taxes[10] = 16.4;
    Joes_house.taxes[11] = 17.0;

// Access an array element. Taxes in April for Joes house.
    cout << Joes_house.taxes[3] << endl;

    return 0;
}