#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

// The Function Header intialized
string translate(vector<string> list,int language_from,int language_to){
   string newPhrase;
   fstream file;
string word1,filename,last;
  
// filename of the file
filename = "dic.txt";
  
for(int j=0;j<list.size();j++){
   last="";
   newPhrase=newPhrase+" ";
  
   // opening file
   file.open(filename.c_str());
  
   // extracting words from the file
       while (file >> word1)
   {
   if(last==list[j]){
       newPhrase=newPhrase+word1;
          break;
       }
    // displaying content
    if(list[j]==word1){
       last=word1;
      
           }
   }
       file.close();      
  
   }
  
   return newPhrase;
}


int main(){
   string phrase;
   cout<<"Please enter your phrase: ";
   getline(cin,phrase);
   string word;
   vector<string> list;
   for(int i=0;i<=phrase.length();i++){
       if(phrase[i]==' ' || i==phrase.length()){
           list.push_back(word);
           word="";
       }
       else{
           word=word+phrase[i];
       }
      
   }
  
   fstream file;
string word1,filename;
  
// filename of the file
filename = "dic.txt";
  
// opening file
file.open(filename.c_str());
int i=0;
  
// extracting words from the file
while (file >> word1)
{
i++;
// displaying content
if(list[0]==word1){
   break;
       }
}
string from,to;
int language_from,language_to;

if(i%2==1){
   language_from=1;
   language_to=0;
   from="English";
   to="French";
   }
   else{
       language_from=0;
   language_to=1;
       to="English";
       from="French";
   }
   file.close();
   string newPhrase=translate(list,language_from,language_to);
   cout<<"Ok... translating "<< from<<" to "<<to<<"..."<<" Translated into "<<to<<": "<< newPhrase << endl;
   }