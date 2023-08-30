#include<iostream>
using namespace std;

int fab(int n){
    // two base case
    if(n==1 || n==0){
        return n;
    }
    
// recursive function
    int answer=fab(n-1)+fab(n-2);
    return answer;
}



int main(){
int n;
cin>>n;
cout<<fab(n)<<endl;
}