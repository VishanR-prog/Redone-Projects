#include <iostream>
#include <iomanip>      // std::setw
 
using namespace std;
 
int main()
{
    // Initializes the variables
    int num,i,count,n;
    // Asks the user for the specified number
    cout << "Enter specified number: ";
    // Takes the input
    cin >> n;
    // Checks the if the number is valid 
    for(num = 1;num<=n;num++){
        count = 0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                count++;
                break;
            }
        }
        // If the count is equal to 0 and if the num is not equal to one. It'll store the numbers and output it
        if(count==0 && num!= 1)
            cout << num << setw(3);
    }
    return 0;
}
 
