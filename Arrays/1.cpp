#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 111};
    int n = sizeof(arr) / sizeof(int);
    int x;
    cout << "Enter the value of x\n";
    cin >> x;

    int index = binary_search(arr, n, x);
    if (index != -1)
    {
        cout << x << " is present at index " << index << endl;
    }
    else
    {
        cout << x << " is not present " << endl;
    }
    return 0;
}