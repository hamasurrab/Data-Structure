#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the nunmber you want to add"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    
    for(int i=1;i<=n;i++){
      int sum=a+b;
      cout<<sum<<" ";
        a=b;
        b=sum;
    }
}