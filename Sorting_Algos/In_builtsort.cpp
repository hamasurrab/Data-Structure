#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[]={1,2,4,6,8,9,2,333,45,6,788,332};
int n=sizeof(arr)/sizeof(int);
sort(arr,arr+n);

// print
for(auto x:arr)
cout<<x<<" ,";
}