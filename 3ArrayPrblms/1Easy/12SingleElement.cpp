

#include <bits/stdc++.h>
using namespace std;

// 🍀 Brute Force Sol ..................
int getSingleElement1(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int num = arr[i]; // selected element
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
                cnt++;
        }
        if (cnt == 1)
            return num;
    }

    return -1;
}

// 🍀Better Approach.....
int getSingleElement2(vector<int> &arr)
{

    // size of the array:
    int n = arr.size();

    // Declare the hashmap.
    // And hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Find the single element and return the answer:
    for (auto it : mpp)
    {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}

// 🍀 Optimal Approach....
int getSingleElement3(vector<int> &arr)
{
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

// 🍀 TestCase Passed
int getSingleElement4(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] != arr[i + 1])
            return arr[i];
    }
    return 0;
}
int main()
{
    vector<int> arr = {4, 4, 2, 1, 2};
    int ans = getSingleElement4(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
