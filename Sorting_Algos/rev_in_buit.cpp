#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int arr[]={2,5,7,3,4,1,8,9,77,88,33,11};
 int n=sizeof(arr)/sizeof(int);
 sort (arr,arr+n);
 for(auto x:arr)
 cout<<x<<" ,";
}