#include<iostream>
using namespace std;

void print(int *a,int n){
//  int n=sizeof(a)/sizeof(int);
cout<<"IN FUNCTION "<<sizeof(a)<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" "<<endl;
}


}


int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    cout<<"In MAIN "<<sizeof(a)<<endl;
   
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 print(a,n);
 }