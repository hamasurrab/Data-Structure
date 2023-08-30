#include<iostream>
using namespace std;


int reverse_array(int *a,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return 0;
}







int main(){
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    reverse_array(a,n);

cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}