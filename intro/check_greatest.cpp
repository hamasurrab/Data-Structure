#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

cout<<"enter the value of a,b,c"<<endl;

cin>>a>>b>>c;
cout<<"the greatest number is:"<<endl;



if(a>b>c){
cout<<a<<endl;
}
else if(b>c>a){
cout<<b<<endl;
}
else
cout<<c;

return 0;



}