// pass by reference(function and array)_____________________________________________
#include<iostream>
using namespace std;


// output is different because from main function we are passing by call of reference(-------we can use *a or a[]---------)
void printArray(int * a,int n){

    
 cout<<"In FUNCTION "<<sizeof(a)<<endl;
//  update value a[0]
a[0]=100;

  for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
cout<<endl;
}



// --------------main function have diferent output because it has array size given but it passes to function of it---------

int main()
{
 
 int a[]={1,2,3,4,5,6};
 int n=sizeof(a)/sizeof(int);


 
 printArray(a,n);
 cout<<"IN MAIN "<<sizeof(a)<<endl;
 for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }

 return 0;   
}