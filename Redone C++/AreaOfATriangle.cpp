#include <iostream>

using namespace std;

int main () {
    //Intializing the variables for the height & base. As well as the variable that will hold the answer
    double height, base;
    double answer;
    // Asking the user for the height and base
    cout << "Enter the values for the height & base in inches: " << endl; 
    // Stores the values
    cin >> height >> base;
    // Formula for finding the Area Of the Triangle 
    answer = (0.5)*base*height;

    cout << "The Area Of the Triangle is: " << answer << endl;

    return 0; 
}