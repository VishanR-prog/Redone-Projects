#include<iostream>
using namespace std;

void flip(int matrix[][4],int rows,int cols){   //function to flip the matrix elements
   int i,j,temp;
   for(i=0;i<rows;i++){  //iterating over the rows of matrix
       for(j=0;j<i;j++){ //iterating over the cols of matrix
           temp = matrix[i][j];
           matrix[i][j] = matrix[j][i];  //swapping the element
           matrix[j][i] = temp;
       }
   }
}
int main(){

   int matrix[4][4] = {{16,3,2,13},{5,10,11,8},{9,6,7,12},{4,15,14,1}}; // Array given in the example 
   int rows = 4;
   int cols = 4;               
   cout<<"Matrix Before Calling function : "<<endl;
   for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){  //printing the matrix before calling function
           cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
   }
   flip(matrix,rows,cols);  //calling the flip function
   cout<<"Matrix After Calling function : " <<endl;
   for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){   //printing matrix after calling function
           cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}