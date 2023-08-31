#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int j=i-1;
        while(j){
            cout<<" +"<<" ";
            j++;
        }
        cout<<endl;
        i++;    
    }
}