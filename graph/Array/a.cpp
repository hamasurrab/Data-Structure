#include<iostream>
using namespace std;


void print(int *a, int n){
int s=sizeof(a)/sizeof(int);
    // cout<<sizeof(a)<<" in function"<<endl;
    cout<<s<<" in func"<<endl;
    cout<<sizeof(&a)<<endl;
}


int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    print(a,n);
    // cout<<sizeof(a)<<"in main"<<endl;
    cout<<n<<" in main"<<endl;
}




