#include <iostream>
using namespace std;

int Hamming_weight(int n) {
    int count = 0;

    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main() { 
    int n;
    cin >> n;
    int count = Hamming_weight(n);
    cout << "Hamming weight of " << n << " is " << count << endl;
    
    return 0;
}


// reverse integer
// compliment of base 10 integer
// Number compliment
// binary to decimal
// decimal to binary
// sqrt(x)
// power of(a,b)