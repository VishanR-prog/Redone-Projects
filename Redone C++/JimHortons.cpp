#include <iostream>

using namespace std; 

int main () {
    // Initializing the variables
    int coffee_qty, doughnut_qty;
    double sum, tax, result;

    // Asks for the user to input the number of coffees bought
    cout << "Enter no of coffee: " << endl;
    cin >> coffee_qty;
    // Asks for the user to inut the number of doughnuts bought
    cout << "Enter no of doughnuts: " << endl;
    cin >> doughnut_qty;
    // Prints out the receipt
    cout << "Jim Hortons" << endl; 
    cout << "Customer Reciept" << endl;
    cout << "-----------------" << endl;

    cout << "Coffee " << "\t" << "x" << coffee_qty << "\t" << (4.99 * coffee_qty) << endl;
    cout << "Doughnut " << "\t" << "x" << doughnut_qty << "\t" << (1.99 * coffee_qty) << endl;
    // Calculates the sum
    sum = (4.99 * coffee_qty) + (1.99 * doughnut_qty);
    // Calculates the tax
    tax = (sum * 13)/100;
    // Adds the sum & tax together to print out the result 
    result = sum + tax;
    //Prints the rest  
    cout << endl;
    cout << "Subtotal " << "\t\t" << sum << endl;
    cout << "HST " << "\t" << "%13" << "\t" << tax << endl;
    cout << endl;
    cout << "Total " << "\t\t" << result << endl;

    return 0;
}