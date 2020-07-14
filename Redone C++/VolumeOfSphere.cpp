#include <iostream>
#include <cmath>

using namespace std;

int main () {

    // Initalizing the Radius & Area variables
    float radius, volume;

    // Initializing pi
     float pi = 3.14159;
    // Asks for the Radius of the sphere
    cout << "Input the radius of the sphere: " << endl; 
    // Takes in the radius value from the user
    cin >> radius;
    // Calulating the volume
    volume = (4*pi*radius*radius*radius)/3;
    // Gives out the answer
    cout << "The Volume Of The Sphere with the radius of " << radius << " is " << volume << endl;
    

    return 0;
}