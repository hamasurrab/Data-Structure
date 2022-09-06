#include<iostream>
using namespace std;
void counting_sort(int arr[],int n){

//doubt

}



int main(){
    int arr[]={2,3,4,6,7,2,3,4,5,67,2,3,4,5,67,1};
    int n=sizeof(arr)/sizeof(int);
    counting_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ,";
    }
}