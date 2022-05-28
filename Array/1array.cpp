#include<iostream>
using namespace std;
int main(){



int a[100]={2};
int n;

cin>>n;
// cout<<"_________________________________";
for (int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"_________________________________"<<endl;
for(int i=0;i<100;i++){
    cout<<a[i]<<" ";
}


}