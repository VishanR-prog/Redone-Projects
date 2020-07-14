#include<iostream>
using namespace std;

// The Extract Odd Function, that takes List1 & List2, the number of elements for the first list & second list. As well the resulting list.
void extractodd(int list1[] ,int m, int list2[], int n, int list3[] , int &n3){
   n3 = 0;
  
   for(int i=0;i<m;i++){
       if(list1[i] % 2 == 1){
           list3[n3] = list1[i];
           n3++;
           cout << list1[i] << "\t";
       }
   }
  
   for(int i=0;i<n;i++){
       if(list2[i] % 2 == 1){
           list3[n3] = list2[i];
           n3++;
           cout << list2[i] << "\t";
       }
       
   }
   
}
// The same function as before just for even numbers in the two arrays.
void extracteven(int list1[] ,int m, int list2[], int n, int list3[] , int &n3){
   n3 = 0;
  
   for(int i=0;i<m;i++){
       if(list1[i] % 2 == 0){
           list3[n3] = list1[i];
           n3++;
           cout << list1[i] << "\t";
       }
   }
  
   for(int i=0;i<n;i++){
       if(list2[i] % 2 == 0){
           list3[n3] = list2[i];
           n3++;
           cout << list2[i] << "\t";
       }
   }
}
// Merges List 1 and List togther, to result in the output of List3.
void merge(int list1[] ,int m, int list2[], int n, int list3[]){
   int index = 0;
  
   for(int i=0;i<m;i++){
       list3[index] = list1[i];
       index++;
       cout << list1[i] << "\t";
   }
  
   for(int i=0;i<n;i++){
       list3[index] = list2[i];
       index++;
       cout << list2[i] << "\t";
   }
   
}
// The BubbleSort function is initialized before the MergeSort function to do initial sorting. 
void bubblesort(int a[],int n){
   for(int i=n-1;i>=0;i--){
       for(int j=0;j<i;j++){
           if(a[j]>a[j+1]){
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
}
// Merges the elements together from the last function of BubbleSort
void mergeSort(int list1[] ,int m, int list2[], int n, int list3[] ){
   bubblesort(list1 , m);
   bubblesort(list2 , n);
  
   int index = 0;
   int i = 0 ,j =0;
  
   while(i<m && j<n){
       if(list1[i] < list2[j]){
           list3[index++] = list1[i++];
       }
       else{
           list3[index++] = list2[j++];
           cout << list1[i] << " " << list2[j] << " " << "\t";
       }
   }
  
   while(i<m){
       list3[index++] = list1[i++];
   }
  
   while(j<n){
       list3[index++] = list2[j++];
   }

}
// Displays one of the arrays elements
void display(int list[] , int n){
   for(int i=0;i<n;i++){
       cout<<list[i]<<"\t";
   }
   cout<<endl;
}
// Main Function
int main()
{
int n,m,n3=0;
cout<<"Enter the length of list 1 : ";
cin>>m;
  
cout<<"Enter the length of list 2 : ";
cin>>n;

int list1[m],list2[n],list3[n+m];

cout<<"\nEnter the elements of list 1 : ";
for(int i=0;i<m;i++) {
cin>>list1[i];
}
cout<<"\nEnter the elements of list 2 : ";
for(int i=0;i<n;i++) {
cin>>list2[i];
}
  
// Calling the functions

cout << "Extract Odd: " << endl;
extractodd(list1, m , list2, n , list3, n3);
cout << endl;
cout << "Extract Even: " << endl;
extracteven(list1, m , list2, n, list3, n3);
cout << endl;
cout << "Merge: " << endl;
merge(list1, m , list2, n,  list3);
cout << endl;
cout << "Merge Sort: " <<  endl;
mergeSort(list1, m, list2, n, list3);
cout << endl;
cout << "Display: " << endl; 
display(list1, n);

return 0;
}
