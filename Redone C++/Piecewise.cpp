#include <iostream>
#include <cmath>

using namespace std;

int main () {
    // Initalizes the variable x and the final result 
    double x, result;
    // Asks the user to input the value for x 
    cout << "Enter the value for x: " << endl;
    // Takes in the value of x
    cin >> x; 
    // Validates the value x if it's greater than 0 
    if (x > 0) {
        result = log(x) + 10;
        cout << result << endl;

    } 
    // Otherwise if the value is less than 0 or a negative integer 
    else {
        double p = -3*x;
        double result = pow(2,p);
        cout << result << endl;
    }
    return 0; 
}