#include <iostream>

using namespace std;

int main () {
    // Intializing the choice variable
    int choice; 
    // Gives the user three sizes of coffee
    cout << "Enter the size of coffee: " << endl << "\t1. Large" << endl << "\t2. Medium" << endl << "\t3. Small" << endl;
    //Asks for the user to input a value from 1 to 3. And takes that said input
    cout << "Your Choice (1-3) : " << endl;
    cin >> choice; 
    // Validate the input and re-prompt until valid input is entered
    while (choice < 1 || choice > 3) {
        cout << "Invalid choice" << endl;
        cout << "Your Choice (1-3) : " << endl;
        cin >> choice; 
    }
    // Display the cost of the based coffee based on the size selected by the user  
    if (choice == 1) {
        cout << "You Selected a Large Coffee which costs $5.99" << endl;
    }
    else if (choice == 2) {
        cout << "You Selected a Medium Coffee which costs $4.99" << endl;
    } else {
        cout << "You Selected a Small Coffee which costs $3.99" << endl;
    }
    return 0; 
}