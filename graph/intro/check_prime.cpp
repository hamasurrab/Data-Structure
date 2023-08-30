#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<endl;

    for (i=2;i<n;i++){
        if(n%i==0){
            cout<<"This no. is not a prime no. ";
        }
        else{
            cout<<"this no. is prime no.";
        }
    }
return 0;
}