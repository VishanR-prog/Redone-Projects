#include <iostream>

using namespace std; 

int main () {
    // n is the number of integers to be added.
    // a is the first number.
    // d is the difference between each number.
    int a, n, d, sum;

    cout << "Enter the two integers, along with d: " << endl;

    cin >> a >> n >> d;
    // Equation for calculating the sum 
    sum = (n/2)*(2*a + (n-1)*d); 

    cout << "The Sum Between the Numbers is: " << sum << endl;

    return 0; 
}