#include <iostream>

using namespace std;

// This is an example of an array of structs

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

// Create a second variable of type house_description
    house_description Bonnies_house;

// Use dot notation to access the members of Bonnies_house
    Bonnies_house.house_number = 2580;
    Bonnies_house.street_name = "Oak Street";
    Bonnies_house.house_color = "Yellow";
    Bonnies_house.house_sqft = 1999.1;

//Create a third variable of type house_description
    house_description Cleves_house;

// Use dot notation to access the members of Cleves_house
    Cleves_house.house_number = 7789;
    Cleves_house.street_name = "Malc Boulevard";
    Cleves_house.house_color = "Orange";
    Cleves_house.house_sqft = 2038.8;

// Create an array to hold these house descriptions
    const int LENGTH = 3;
    house_description milk_route[LENGTH];

// Fill the array
    milk_route[0] = Joes_house;
    milk_route[1] = Bonnies_house;
    milk_route[2] = Cleves_house;    

// Access a member of the array
cout << milk_route[0].house_number << endl;

    return 0;
}