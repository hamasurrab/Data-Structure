#include<iostream>
#include<cstring>
using namespace std;
int main(){
   /* 
   // initialise string ---1
    string s="helo world";
    cout<<s;
    */


/* 
// initialise string ----2
string s("helo word");
cout<<s;
*/

// or we can take input by using GETLINE method ----3

string s;
getline(cin,s,'.'); // if you want ot take paragraph use '.'

cout<<s<<endl;
}