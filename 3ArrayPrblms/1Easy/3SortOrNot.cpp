#include <iostream>
using namespace std;

int checkSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
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
    int res = checkSort(arr, n);
    cout << "largest element is " << res << endl;

    return 0;
}