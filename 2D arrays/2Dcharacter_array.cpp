#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           getline(cin,ch[i],ch[j],1000);
        }
    }
}