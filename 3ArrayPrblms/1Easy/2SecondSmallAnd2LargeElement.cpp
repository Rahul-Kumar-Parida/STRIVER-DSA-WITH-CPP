#include <iostream>
#include <limits.h>
using namespace std;

// Find Second largest and second Smallest elementin an array.

// 🍀 Better Approach ...
// 😍 Second Largest...
int secondLargest(int arr[], int n)
{
    int Large = INT_MIN;
    int secondLarge = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Large)
        {
            secondLarge = Large;
            Large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != Large)
        {
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

// 😍 Second Smallest....
int secondSmallest(int arr[], int n)
{
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = secondLargest(arr, n);
    cout << "largest element is " << res << endl;

    return 0;
}