#include <iostream>
#include <cmath>

using namespace std; 

int main () {
    int x = 5; 
    int y = 7;
    int sum;

    sum = ++x * --y;

    cout << sum << endl; 

    return 0;  
}