#include<iostream>
using namespace std;

void printArray (int * arr, int n){
cout<<"in function "<<sizeof(arr);
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ,";
}

}


int main(){
int arr[]={1,2,3,4,5,6};
int n = sizeof(arr) / sizeof(int);
cout<<"in main "<<sizeof(arr);
cout<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ,";
}
cout<<endl;
printArray(arr,n);
}