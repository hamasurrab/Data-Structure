#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){

for(int i=0;i<n-1;i++){
int temp=arr[i];
int min=i;


//find out minimum value
for(int j=i;j<n;j++){
if(arr[j]<arr[min]){
    min = i;
}

}
swap(arr[min],arr[i]);
}

}


int main(){
    int arr[]={2,23,4,6,7,1,3,5,33,44,555};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
selection_sort(arr,n);
for(auto x:arr){
    cout<<arr[x]<<" ";
}
}
