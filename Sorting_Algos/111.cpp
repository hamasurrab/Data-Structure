#include<iostream>
using namespace std;


void isort(int arr[], int n);


int main(){
    int arr[]={1,3,5,7,2,4,8,99,88,77};
    int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    isort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,"    ;
    }
}



void isort(int arr[],int n){
    for(int i=1;i<n;i++){
        int x=arr[i];
        int j=i-1;
        while(arr[j]>0 && arr[j]>x){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=x;
    }
}