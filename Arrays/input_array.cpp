#include<iostream>
using namespace std;
int main(){
    int marks[10];
    int n;
    cout<<"Enter the number of student\n";
    cin>>n;


    //INPUT 
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }


    //OUTPUT
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ,";
    }
}