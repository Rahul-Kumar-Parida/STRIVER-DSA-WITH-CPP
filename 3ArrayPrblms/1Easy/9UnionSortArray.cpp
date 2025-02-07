#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

// 🍀 Solution 1 Using Map Method ..................

vector<int> FindUnionMap(int arr1[], int arr2[], int m, int n)
{
    map<int, int> S;
    vector<int> Union;
    for (int i = 0; i < m; i++)
    {
        S[arr1[i]]++;
    }
    for (int j = 0; j < n; j++)
    {
        S[arr2[j]]++;
    }
    for (auto &it : S)
        Union.push_back(it.first);

    return Union;
}

// 🍀 Solution 2 Using Set Method ..................

vector<int> FindUnionSet(int arr1[], int arr2[], int m, int n)
{
    set<int> S;
    vector<int> Union;
    for (int i = 0; i < m; i++)
    {
        S.insert(arr1[i]);
    }
    for (int j = 0; j < n; j++)
    {
        S.insert(arr2[j]);
    }
    for (auto &it : S)
        Union.push_back(it);

    return Union;
}


// 🍀 Solution 3 Using Two Pointer Method ................






int main()
{
    int m;
    cout << "Enter M:" << endl;
    cin >> m;
    cout << "Enter M Elements:" << endl;
    vector<int> arr1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter N:" << endl;
    int n;
    cin >> n;
    cout << "Enter N Elements:" << endl;
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    vector<int> res = FindUnionSet(arr1.data(), arr2.data(), m, n);
    cout << "UNION: " << endl;
    for (auto &val : res)
    {
        cout << val << " ";
    }

    return 0;
}