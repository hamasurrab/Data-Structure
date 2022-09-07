#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char sentence[1000];
    cin.getline(sentence,1000,'#');// we can add third parameter in bracket --this's basically larger output--'#','\n','.'____which means code will stop here.
    cout<<sentence;

}