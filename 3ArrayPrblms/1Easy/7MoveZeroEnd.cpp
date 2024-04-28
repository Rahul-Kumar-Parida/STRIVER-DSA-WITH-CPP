#include <iostream>
using namespace std;

void moveZeros(int arr[], int n)
{
    // Write your code here.
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1) return;
    else
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
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
    moveZeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}