#include <iostream>
#include<string>

using namespace std;

const string EMPTY = "";
const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
                "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
                "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
                "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };
const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
                "Sixty ", "Seventy ", "Eighty ", "Ninety " };

// A String function that converts to digit form
string convert2digit(int n, string suffix)
{
    if (n == 0) {
        return EMPTY;
    }

    if (n > 19) {
        return Y[n / 10] + X[n % 10] + suffix;
    }
    else {
        return X[n] + suffix;
    }
}
//
string numberToWords(unsigned long long int n)
{
    string res;

    res = convert2digit((n % 100), "");

    if (n > 100 && n % 100) {
        res = "and " + res;
    }

    res = convert2digit(((n / 100) % 10), "Hundred ") + res;

    res = convert2digit(((n / 1000) % 100), "Thousand ") + res;

    res = convert2digit(((n / 100000) % 100), "Hundred Thousand ") + res;

    res = convert2digit((n / 10000000) % 100, "Million ") + res;
    return res;
}

// Main function 
int main()
{
    double input,in_second; //variable declare
    int in_first,in_seconds; //variable declare

   while (true)
   {
           cout<<"Please Enter Currency Input in Numeric Here: ";//variable declare
          cin>>input; //input display
           if(input<=1000000)
               break; //break if value is correct other wise it will rotate 
   }
   in_first=(int)input;

   in_second=input-in_first;

   in_seconds=in_second*100;

   if(in_seconds>=50)
   {
   in_seconds=in_seconds+1;
   }
   cout<<numberToWords(in_first)<<" dollars "<< "and " <<numberToWords(in_seconds)<< " Cents"; //output display
   return 0;
}