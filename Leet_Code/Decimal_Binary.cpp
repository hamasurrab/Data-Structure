#include<iostream>
#include<bitset>
using namespace std;
int main (){
    int DecimalNumber;
    std::cout<<"Enter the decimal number you want to convert into Binary: ";
    std::cin>>DecimalNumber;

if(DecimalNumber<0){
    std::cerr<<"Please Enter the non negative Number: "<<std::endl;
    return 1;
}

    std::bitset<32>binaryBits(DecimalNumber);
    std::cout<<"Binary Equivalent: "<<binaryBits;
    return 0;
}