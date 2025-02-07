#include <iostream>
using namespace std;


//Linear Search............
int main()
{
    int n;
    cout<<"Enter N :"<<endl;
    cin >> n;
    cout<<"Find Element: "<<endl;
    int d;
    cin >> d;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == d)
        {
            cout<<"Element is present"<<endl;
        }
    }
    return 0;
}