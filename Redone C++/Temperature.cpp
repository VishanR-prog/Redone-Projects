#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


void sum(double b[], int l1) { // Function to calculate sum of temperatures
double sum = 0;
for(int j=0;j<l1;j++)
sum = b[j]+ sum;
cout << sum << endl;
}

void avg(double c[], int l2) {   // Function to calculate average of temperatures
double sum = 0;
double avg = 0;
int count = 0;
for(int k=0;k<l2;k++) {
sum = c[k]+ sum;
count = count + 1;
}
  
avg = sum/count;
cout << avg << endl;

}

void min(double d[], int l3) {   // Function to find minimum temperature
double min;
int l=0;
min = d[l];

for(;l < l3-1;l++) {
if (min > d[l+1]) {
       min = d[l+1];
       
   }
}
cout << min << endl;
}

void max(double e[], int l4) {   // Function to find maximum temperature
double max;
int m=0;
max = e[m];
for(;m < l4-1;m++) {
if (max < e[m+1]) {
       max = e[m+1];
   }
}
cout << max << endl;
}

double bsort(double temperatures[], int l5) { // Function to sort the temperatures in ascending order 
    ifstream myFile;
    myFile.open("temprature.txt");
    double temparatures[22];
    int i = 0;

    if( myFile.is_open() )
    {
        while( myFile >> temparatures[i] )
        {
            i++;
        }
    }

    for( i = 0; i < 22; i++)
    {
        for(int j = (i + 1); j < 22; j++)
        {
            if(temparatures[i] > temparatures[j])
            {
                double temp = temparatures[i];
                temparatures[i] = temparatures[j];
                temparatures[j] = temp;
            }
        }
    }
    cout << endl;
    for( i = 0; i < 22; i++)
    {
        cout << temparatures[i] << ",";
    }
    return 0;
}  

void reverse(double arr[]){ // Function to calculate the reverse values

const int size = 22; 

int i = 0;

// temporary array

double temp[size];

// loop storing orignal array value

// into temporary array in reverse

for(int i = 0; i < size; i++)

temp[size -1 -i] = arr[i];

// loop to store values from temporary to orignal

for(int i = 0; i < size; i++) 

arr[i] = temp[i];

cout << arr [i] << "," << endl;



}

void bsearch(double arr[], double temp, int size){

// loop for search

for(int i = 0; i < size; i++)

// if value is same

if(arr[i] == temp)

// printing index value

cout << i << endl;

}

void display(double arr[], int size){

// loop for all element in array

for(int i = 0; i < size; i++)

// printing the value

cout << arr[i] << endl;

}


int main() {
ifstream fileinput; // Define an intput file stream
int len = 0;
double a[100]; // Array for accepting temperature values
int size = sizeof(a)/sizeof(a[0]);

fileinput.open("temprature.txt"); // Open file in input mode

if (!fileinput.is_open()) { // Check for error in opening file
cout << "Input text file cannot be opened!\n";
return 0;
}

while (fileinput.eof() != 1) { // Check for end of file
fileinput >> a[len]; // Store temperature values in array
len++;
}
  
cout << "Sum of Temperatures is:  " << endl;
sum(a, len); // Display Sum
cout << "Avg of Temperatures is: " << endl;
avg (a, len); // Display Average
cout << "Minimum Temperature is: " << endl;
 min (a, len);  // Display Minimum temp
cout << "Maximum Temperature is:  " << endl;
 max (a, len); // Display Maximum temp 
cout << "Temperatures Ascending In Order: " << endl;
 bsort (a, len);
 cout << endl;
cout << "Reversing the Order: " << endl;
 reverse (a);
 cout << "Bubble Search: " << endl;
 bsearch (a, len, size);
 cout << "Displaying The Temperatures: " << endl;
 display (a, len);


fileinput.close(); // close the output file   // Close Input file

return 0; // return from function save
}