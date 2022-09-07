#include <iostream>
using namespace std;
int main()
{
    // char a[1000];
    // cin.getline(a,1000,'#');
    char a;
    a = cin.get();
    int alpha = 0;
    int digit = 0;
    int space = 0;

    while (a != '\n')
    {
        if (a >= '0' and a <= '9')
        {
            digit++;
        }
        else if (a >= 'a' and a <= 'z' or a >= 'A' and a <= 'Z')
        {
            alpha++;
        }
        else if (a == ' ' )
        {
            space++;
        }
        a=cin.get();
    }
    cout<<"digit"<<digit<<endl;
    cout<<"space"<<space<<endl;
    cout<<"alpha"<<alpha<<endl;
}