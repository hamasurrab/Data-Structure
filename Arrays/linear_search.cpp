#include<iostream>
using namespace std;

int Linear_search(int arr[],int n,int x){

for(int i=0;i<n;i++){
        if(x==arr[i]){
          return i;
        }
   }
    return -1;

}

int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8,9,12,13,14,15};
    int n=sizeof(arr)/sizeof(int);
    
    int x;
    cout<<"Enter the value you want to search"<<endl;
    cin>>x;

    int index=Linear_search(arr,n,x);

    if(index!=-1){
        cout<<x<<" is present in index "<<index;
    }
    else{
    cout<<x<<" is not presnt is given index "<<index;
    }
return 0;
}