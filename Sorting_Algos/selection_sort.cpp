#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int current = arr[i];
        int min_pos = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }

        swap(arr[min_pos], arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 33, 22, 11, 12, 13, 45, 78};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);
    for (auto x : arr)
        cout << x << " ";
}