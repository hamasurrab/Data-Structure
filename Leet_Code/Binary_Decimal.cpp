#include<iostream>
#include<bitset>
using namespace std;
int main(){
    std::string binary;
    std::cout<<"Enter the Decimal Number: ";
    std::cin>>binary;
    int Decimal=std::bitset<32>(binary).to_ulong();
    cout<<"Decimal equivalent: "<<Decimal<<endl;
    return 0;
}


// #include<iostream>
// #include<bitset>
// using namespace std;
// int main (){
// std::string binary;
// std::cout<<"Enter the number you want from binary to decimal: ";
// std::cin>>binary;
// int Decimal=std::bitset<32>(binary).to_ulong();
// cout<<"Decimal Equivalent "<<Decimal<<endl;
// std::bitset<8>b1(binary);
// std::bitset<32>b2(binary,2);
// std::bitset<8>b3(binary,2,3);
// cout<<b1<<endl<<b2<<endl<<b3;
// }