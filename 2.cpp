// #----------bubble sort
#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 1, 2, 4, 8};
    int n = sizeof(arr) / sizeof(int);
    for(auto x:arr)
    cout<<x<<" ";
    print(arr, n);
    cout<<endl;
    for(auto x: arr)
    cout<<x<<" ";
}