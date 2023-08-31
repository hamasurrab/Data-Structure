#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=n-1;
    while(j>=i){
        cout<<" "<<" ";
        j--;
    }
    int k=1;
    while(k<=i){
        cout<<"*"<<" ";
        k++;
    }
    int l=n+1;
    while(l<=2*n){
        cout<<"-"<<" ";
        l++;
    }
    cout<<endl;
    i++;
}
}