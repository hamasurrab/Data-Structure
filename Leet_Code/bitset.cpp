#include<iostream>
#include<bitset>
using namespace std;
 int main (){
    std::string binary;
    std::cout<<"Enter the value of binary number you want to convert: ";
    std::cin>>binary;

    int Decimal=bitset<32>(binary).to_ulong();
    std::cout<<"Decimal equivalent: "<<Decimal;
    return 0;

 }