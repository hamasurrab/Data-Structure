//print reve tri


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int k=2*i;k<(n*2)-1;k++){
        cout<<"-";
    }
    for(int l=n;l<i;l++)
    cout<<"*";
    cout<<endl;
}
}





// for(int k=n;k>i;k--)
//         cout<<"*";