#include<iostream>
#include<string>
using namespace std;

class menu
{
    public:
    void body()
    {
        cout<<"***************************Welcome to cafe*****************"<<endl;
        cout<<"1-Espresso"<<endl;
        cout<<"2-Cappuccino"<<endl;
        cout<<"3-Latte"<<endl;
        cout<<"To confirm your order plaese choose"<<endl;
    }
};


int main(){

menu x;
x.body();
int option;
char y;
// system("cls");
system("color a");


do{
    int milk, cream, latte,option;
cin>>option;
switch(option)
{
case 1:
cout<<"choose Add-on"<<endl;
cin>>;
if()
cout<<"Your order has been confirmed thanks"<<endl;
else
cout<<"your password is wrong"<<endl;

case 2:
cout<<"To pay 10$ enter your visa pin"<<endl;
cin>>;
if()
cout<<"Your order has been confirmed thanks"<<endl;
else
cout<<"your password is wrong"<<endl;

case 3:
cout<<"To pay 10$ enter your visa pin"<<endl;
cin>>;
if(     )
cout<<"Your order has been confirmed thanks"<<endl;
else
cout<<"your password is wrong"<<endl;
break;

default :
cout<<"error"<<endl;
break;
}
cout<<" if you want to order anything type Y for yes N for no"<<endl;
cin>>y;

}
while(y=='y');


}