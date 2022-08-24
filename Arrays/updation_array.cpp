#include<iostream>
using namespace std;
int main(){
    int marks[100]={0};
    int n;
    cout<<"Enter the number of student\n";
    cin>>n;


    //INPUT 
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }


    //OUTPUT
    for(int i=0;i<100;i++){
        cout<<marks[i]<<" ,";
    }
}