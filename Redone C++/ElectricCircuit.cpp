#include<iostream>
#include <fstream> // for file IO
using namespace std;

// function to get file name from user to a reference variable "infilename"
void getInputFile(string &infilename){ // infilename passed by reference (&)
   cout<< "Enter file name: " << endl;
   cin >> infilename;
}

// This function is to test whether the design is correct and puts the decision into a reference variable "result"
void check(double R1,double R2,double R3,double R4,double R5,double R6, bool &result){ // result passed by reference (&)
   if ( ((R1+R2) * R4*R6)/((R3+R4)*R1*R5) == 7.5)
       result = true; // passed
   else
       result = false; // failed
}

// This function is to process files, test contents of input file, classify and write to two output files
void processFiles(string infilename,string outfilename1,string outfilename2){

   ifstream infile;
   infile.open(infilename); // open input file for reading

   ofstream outfile1,outfile2;
   outfile1.open (outfilename1,fstream::app); // open output file1 for appending
   outfile2.open (outfilename2,fstream::app); // open output file2 for appending

   double R1,R2,R3,R4,R5,R6;
   bool correct;
   while(infile>>R1>>R2>>R3>>R4>>R5>>R6){ // read until end of file
   check(R1,R2,R3,R4,R5,R6,correct); // test and update the variable "correct" thru reference variable "result"
       if(correct)
           outfile1 <<R1<<"\t"<<R2<<"\t"<<R3<<"\t"<<R4<<"\t"<<R5<<"\t"<<R6<<"\n"; // append to good.txt
       else
           outfile2 <<R1<<"\t"<<R2<<"\t"<<R3<<"\t"<<R4<<"\t"<<R5<<"\t"<<R6<<"\n"; // append to bad.txt
   }
// finally close all files
   infile.close();
   outfile1.close();
   outfile2.close();
}

int main(){

   string inFileName;
   getInputFile(inFileName); // call the function to get input file from user / console

   string outFileName1 = "good.txt";
   string outFileName2 = "bad.txt";

   processFiles(inFileName,outFileName1,outFileName2); // call the function to determine designs as good or bad

   return 0;
}