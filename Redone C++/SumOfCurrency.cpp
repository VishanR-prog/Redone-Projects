#include <iostream>

using namespace std;
// Intializing the values for each currency
int DOLLAR = 100;
int QUARTER = 25; 
int DIME = 10; 
int NICKEL = 5; 
int PENNY = 1;
// Function reference
int change(int &money, int coin);

int main (int argc, char **argv) {
    // Initialize the variable for input
    double input;
    // Asks the user for money
    cout << "Enter the amount: " << endl;
    // Takes in the value
    cin >> input;
    int money = input * 100;
    // Outputs how you will be getting the currency in dollars, quarters, dimes, nickels and pennys
    cout << "You'll get: " << endl;
    cout << "\t" << change(money, DOLLAR) << " dollar(s)\n" << endl;
    cout << "\t" << change(money, QUARTER) << " quarters(s)\n" << endl;
    cout << "\t" << change(money, DIME) << " dime(s)\n" << endl;
    cout << "\t" << change(money, NICKEL) << " nickel(s)\n" << endl;

    cout << "\t" << change(money, PENNY) << " penny(s)\n" << endl;

    return 0;
}
// Function Definition
int change (int &money, int coin) {
    int count = money / coin;
    money %= coin;
    return count;
}