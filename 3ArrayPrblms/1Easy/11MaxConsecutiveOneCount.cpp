#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }

        maxi = max(maxi, cnt);
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);  
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = findMaxConsecutiveOnes(arr);              
    cout << "The maximum consecutive 1's are " << ans;  
    return 0;
}