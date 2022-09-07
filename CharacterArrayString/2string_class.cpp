#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){


int n;
cin>>n;
string temp;
vector<string> sarr;      // dynamic array
while(n--){
    getline(cin,temp);
    sarr.push_back(temp);
}
for(string x:sarr)
cout<<x<<","<<endl;
}