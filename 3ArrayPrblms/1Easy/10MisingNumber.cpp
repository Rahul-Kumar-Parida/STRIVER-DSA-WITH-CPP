#include <bits/stdc++.h>
using namespace std;

// 🍀Better Approach.......
int missingNumber1(vector<int> &a, int N)
{

    int has[N + 1] = {0}; // hash array
    for (int i = 0; i < N - 1; i++)
        has[a[i]]++;
    for (int i = 1; i <= N; i++)
    {
        if (has[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

#include <bits/stdc++.h>
using namespace std;

int missingNumber2(vector<int> &a, int N)
{
    int sum = (N * (N + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < N - 1; i++)
    {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 3, 5};
    int ans = missingNumber2(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
