#include <iostream>
#include <cmath>

using namespace std; 

int main () {
    //Initializing values
    int m1 = 100;
    int m2 = 50;
    double g = 9.81;

    double T;

    // Calculating the Tension with said values
    T = (2*m1*m2)/(m1+m2)*g;
    
    // Outputting the answer
    cout << "The Tension in the cord is " << T << endl; 

    return 0; 
}