// #include<iostream>
// using namespace std;
// int main(){
//     int a=10,b=1;
//     if(++a){
//         cout<<b;
//     }
//     else{
//         cout<<(++b);
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     int b=a++;
//     int c=++a;
//     cout<<b;
//     cout<<c;
// }
#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int b=2;
    if(a-->0 && ++b>2){
        cout<<"stage1";
    }
    else{
        cout<<"stage2";
    }
    cout<<a<<""<<b;
   
}