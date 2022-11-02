#include<iostream>
using namespace std;



void print(int a[]){
cout<<sizeof(a)<<"in function";
}




int main(){
int a[]={1,2,3,4,56,6};

int n=sizeof(a)/sizeof(int);
print(a);
cout<<"in main"<<sizeof(a)<<endl;

}