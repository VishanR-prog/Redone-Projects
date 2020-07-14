#include <iostream>
#include <iomanip>

using namespace std;

int main () {
// Intializing the Stress and distance as the load is placed from the fixed end of the beam
int S(3000), D(8);
// Intializing the base and height in inches 
int base(2), height(4);
// L as the maximum weight in lbs of the load placed on the beam
double L;
// Initializing the Inertia value  
double I;
// Equation of Inertia
I = ((base* height*height*height)/12.0);
// C is one half the height in inches of symmetrical beam
double C = 0.5*(height);
// Equation of finding the Maximum Weight in Lbs of the Load placed on the Beam  
L = ((S * I ) / (D * C));

cout << "The Maximum Weight In Lbs on the beam is: " << L << endl; 

return 0; 
}