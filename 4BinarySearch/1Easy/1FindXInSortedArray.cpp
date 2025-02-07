
#include <bits/stdc++.h>
using namespace std;
// // 😍 Two Pointer Approach....
// int binarySearch(vector<int> &nums, int target)
// {
//     int n = nums.size(); // size of the array
//     int low = 0, high = n - 1;

//     // Perform the steps:
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target)
//             return mid;
//         else if (target > nums[mid])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

int binaryRecursive(int arr[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    int mid = low + (high - low) / 2; // Corrected calculation of mid
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        return binaryRecursive(arr, mid + 1, high, target); // Added return statement
    }

    return binaryRecursive(arr, low, mid - 1, target);
}

int main()
{
    int a[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 6;
    int ind = binaryRecursive(a, 0, n - 1, target);
    if (ind == -1)
        cout << "The target is not present." << endl;
    else
        cout << "The target is at index: "
             << ind << endl;
    return 0;
}