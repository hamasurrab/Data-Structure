#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000]="apple";
    char b[1000];
    
    //cal length
    cout<<strlen(a)<<endl;

    //copy string
    cout<<strcpy(b,a)<<endl;

    //compare
    cout<<strcmp(a,b)<<endl;

    //concatenation
    cout<<strcat(a,b)<<endl;

}