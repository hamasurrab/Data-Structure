// student marks input _output
#include<iostream>
using namespace std;
int main(){
    int marks[100];
int n;
cout<<"Enter student marks"<<endl;
cin>>n;
//input
for(int i=0;i<n;i++){
cin>>marks[i];
}
cout<<"______________________________________________________________"<<endl;
// output
for(int i=0;i<n;i++){
    cout<<marks[i]<<endl;
}
// cout<<endl;

}