#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int x;
    cout << "Enter the value you want to search" << endl;
    cin >> x;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 23, 25};
    int n = sizeof(arr) / sizeof(int);

    int index = Binary_Search(arr, n, x);
    if (index != -1)
    {
        cout << x << " is present at index " << index << endl;
    }
    else
        cout << x << " is not present at any index" << endl;
    return 0;
}