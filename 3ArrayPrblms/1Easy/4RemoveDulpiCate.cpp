#include <iostream>
#include <set>
using namespace std;

// 😍 Brute Force......
int removeDuplicate(int arr[], int n)
{
    set<int> setArr;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (setArr.insert(arr[i]).second)
        {
            arr[j++] = arr[i];
        }
    }

    return j;
}

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

// 😍 Optimal Solution....

int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = removeDuplicates(arr, n);
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}