
#include<iostream>
#include<bitset>
using namespace std;
int main(){
    std::string binary;
    std::cout<<"Enter the number you want to convert frm binary to Decimal: ";
    std::cin>>binary;

    int Decimal=bitset<32>(binary).to_ulong();
    std::cout<<"Decimalequivalent: "<<Decimal;
    return 0;
    
}