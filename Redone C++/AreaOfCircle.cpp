#include <iostream>
#include <cmath>

using namespace std;

int main () {

    // Initalizing the Radius & Area variables
    float radius, area;
    //Initializing Pi 
    float pi = 3.14159;
    // Prompt for radius value
    cout << "Enter the radius value : " << endl;
    // Takes in the radius value
    cin >> radius;
    // Calculates the Area with given radius value
    area = pi * radius * radius;
    // Gives out the Answer
    cout << "The Area Of The Circle with the radius of " << radius << " is " << area << endl;

    return 0;
}