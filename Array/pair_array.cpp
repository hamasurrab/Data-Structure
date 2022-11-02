# include<iostream>
using namespace std;



void print_pair(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<a[i]<<","<<a[j]<<endl;
        }
        
    }
}





int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(a)/sizeof(int);
print_pair(a,n);
return 0;
}