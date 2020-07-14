#include<iostream>

using namespace std;

int main()
{

// Declaring the 4x4 array.
int square[4][4];
int magicNumber;
int sum;
static int p=1;
bool isMagicSquare = true;
bool duplicate[17];
// The For Loop that that goes through if there are no duplicate elements
for(int i=1; i<16; i++)
duplicate[i] = false;


for(int i=0; i<4; i++)
{
for(int j=0; j<4; j++)
{
       
        cout << "Enter Element " << (p++) << ":";
        cin >> square[i][j];
        // If the Element is out of range
        if(square[i][j]>16 || square[i][j]<1 )
        {
        cout << "Found A number Out of Range (1-16) Exiting ... " <<endl;;
        return 0;                
        }
        // If a Duplicate Element is entered by the user
        if(duplicate[square[i][j]])
        {
        cout << "Duplicate Number found " <<endl;;
        cout << "can't Process towards Magic Square" <<endl;
        return 0;
        }
        duplicate[square[i][j]] = true;
        }
        }
       
       

// This is the number we will compare every other row/column/diagonal to
magicNumber = 34; // this magic number is constant. 16*17/2 * 4 = 34

// It first checks all the rows involved
for (int i = 0; i < 4; i++)
{
sum = square[i][0] + square[i][1] + square[i][2] + square[i][3];
if (sum != magicNumber)
{
isMagicSquare = false;
break;
}
}

// This past checks all columns
for (int i = 0; i < 4; i++)
{
    if(isMagicSquare)
    {
     sum = square[0][i] + square[1][i] + square[2][i] + square[3][i];
     if (sum != magicNumber)
     {
     isMagicSquare = false;
     break;
     }   
     }
}

// This part checks the two diagonals
if(isMagicSquare)
{
sum = square[0][0] + square[1][1] + square[2][2] + square[3][3];
if (sum != magicNumber)
isMagicSquare = false;
}
if(isMagicSquare)
{
sum = square[0][3] + square[1][2] + square[2][1] + square[3][0];
if (sum != magicNumber)
isMagicSquare = false;
}

cout << "Array:\n";
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
cout << square[i][j] << " ";
}
cout << endl;
}
// If the MagicSquare in the 4x4 array is true with else condition saying if the 4x4 array is not a magic square
if (isMagicSquare == true)
{
cout << "This array is a magic square.\n";
}
else
{
cout << "This array is not a magic square.\n";
}

return 0;

}