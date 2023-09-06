
// reverse integer

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n Value\n";
    cin>>n;

    while(n!=0){
        int digit=n%10;
        cout<<digit;
        n=n/10;
    }

}