#include<iostream>
using namespace std;


int linear_search(int a[],int n,int key){
    for(int i=0;i<n;i++){
if(a[i]==key){
return i;

}
    }
return -1;
}



int main()
{

int a[]={12,23,5,3,34,445,23,22222222,233,4,3};
int n=sizeof(a)/sizeof(int);
int key;
cin>>key;


int index=linear_search(a,n,key);
if(index!=-1){
    cout<<key<<" key is present at index "<<index;
}

else{
    cout<<key<<" is not present";
}

    return 0;
}