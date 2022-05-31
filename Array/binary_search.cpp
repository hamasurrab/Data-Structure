#include<iostream>
using namespace std;


int binary_search(int a[],int n,int key){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}





int main(){

    int a[]={1,2,3,4,5,6,7,99,8,9,88,7,6,5,66,4,321234,543212345,8765,4321,2347,6543,23456,4324,66,44,3322,22,55,33};
    int n=sizeof(a)/sizeof(int);
    
    int key;
    cin>>key;
    int index=binary_search(a,n,key);
    if(index!=-1){
cout<<key<<" is  present";
    }
    else{
cout<<key<<" is not present";
}
return 0;
}