#include<iostream>
using namespace std;


int fact(int n){

    // BASE CAse
if(n==0){
    return 1;
}

// recursive CASE
int answer=n*fact(n-1);
return answer;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}
