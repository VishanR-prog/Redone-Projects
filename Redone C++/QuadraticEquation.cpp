#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Initializing variables
    double a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    // Asks for user input for the coefficients
    cout << "Enter Coefficients a, b, c: " << endl; 
    // Takes the user input
    cin >> a >> b >> c;
    // Calulates the discrimiant
    discriminant = b*b - 4*a*c;
    // If the Discriminant is higher than 0 
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;

    }
    // If the Disciminant is equal to 0
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }
    // Or if the coeffiecients aren't a regular integer
     else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
    }
    