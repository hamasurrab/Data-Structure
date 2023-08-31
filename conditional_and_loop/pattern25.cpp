#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<i){
            cout<<" "<<" ";
            j++;
        }
        int k=n;
        while(k>=i){
            cout<<"*"<<" ";
            k--;
           
        }
         cout<<endl;
         i++;
    }
}