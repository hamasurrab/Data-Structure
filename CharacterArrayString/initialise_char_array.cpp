#include<iostream>
#include<cstring>
using namespace std;
int main(){
    //1 method--we give terminate value at the end to get rid off garbage value
    char arr[]={'a','b','c','\0'};
    //2 method ----- in this case garbage value will occur(wrong method)
    // char arr[]={'a','b','c'};

//3 method --- this will give same output as we rquired 
// char arr[]={"abcd"};

    for(auto x:arr)
    cout<<x;
     //or another output
    //  cout<<x;



// ____ let's check out size of this char array with inbuilt function ---first add #include<cstring>
cout<<strlen(arr);// it will give only visible character 
cout<<endl;
cout<<sizeof(arr);// it will give null character also so, +1
}