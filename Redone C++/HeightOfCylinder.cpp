#include <iostream>
#include <cmath>

using namespace std;

int main () {
    // Initializing the Surface Area, radius, height & pi
    double s, r, h;
    double pi = 3.14159;
    // Asks for the values for the Surface Of The Cylinder
    cout << "Enter the value for the Surface Of the Cylinder & the radius: " << endl;
    // Takes in the value
    cin >> s >> r;
    // Calculates the height with the formula given
    h = (s - (2*pi*r*r)) / (2*pi*r);
    // Outputs the answer
    cout << "The Height Of The Cylinder is: " << h << endl;

    return 0;
}