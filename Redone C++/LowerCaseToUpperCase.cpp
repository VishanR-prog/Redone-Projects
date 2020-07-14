#include <iostream> 
#include <string>

using namespace std; 

int main () {
    // Initializes the string
    string line;
    // Asks for the string
    cout << "Enter a string" << endl;
    // Uses the getline function to get the string and store as a line 
    getline(cin, line);
    // A For Loop that increments or decrements based on if the string stored is in UpperCase or Lowercase
    for (int i = 0; i < line.size(); ++i) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            line[i] -= 32;
        } 
        else if (line[i] >= 'A' && line[i] <= 'Z') {
            line[i] += 32;
        } 
    }
    // Ourputs the line in either lowercase or uppercase
    cout << line << endl;
    return 0; 
}