#include <iostream>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)
void ArrangeArray(int arr[], int n)
{

    int temp[n];
    int small = 0;
    int large = n - 1;

    int flag = true;

    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            temp[i] = arr[large--];
        }
        else
        {
            temp[i] = arr[small++];
        }

        flag = !flag;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

// Time Complexity : O(n)
// Space Complexity : O(1)

// Test case 1 : { 1,2,3,4,5}
// Test case 2 : { 11,22,33,44,55}
// Test case 3 : { 1,20,30,478,502}
// Test case 4 : { 102,205,306,488,590}
int main()
{
    int arr[] = { 1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array before arrranging" << endl;
    for (auto x : arr)
        cout << x << " ";

    ArrangeArray(arr, n);
    cout << endl;
    cout << "Array after arranging" << endl;

    for (auto x : arr)
        cout << x << " ";
}