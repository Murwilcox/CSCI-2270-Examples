#include <iostream>
#include <random>

using namespace std;

//Create a struct for grouping values of different types together
struct house_description
{
    int house_number;
    string street_name;
    string house_color;
    double house_sqft;
};


// Create a function to return a random address
// The function receives nothing and returns a struct
house_description random_address()
{
    // create a variable of type house_description
    house_description result;

    // provide info for the members of result
    result.house_number = 100 + rand() % 100;
    result.street_name = "Main";
    result.house_color = "Purple";
    result.house_sqft = 2000 + rand() % 1000;

    return result;
}


int main()
{

// Call the function and print to console the house number
    house_description house = random_address();

    cout << house.house_number << endl;

    return 0;

}