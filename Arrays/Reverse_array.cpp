#include<iostream>
using namespace std;

int Reverse_array(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
        
    }
return 0;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int n =sizeof(arr)/sizeof(int);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
 Reverse_array(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
 return 0;
}