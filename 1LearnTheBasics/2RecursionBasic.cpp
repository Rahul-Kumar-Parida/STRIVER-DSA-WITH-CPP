#include <iostream>
#include <vector>
using namespace std;

/*
//😍Recursion -1...

void fun(){
    cout<<1;
    // fun();   //infinte recursion and stack over flow also
}

int count =0;
void funn(){
    if(count == 5){  //specified condition  //base condition
        return;
    }
    cout<<count<<endl;
    count++;
    funn();  //Finite recursion
}


int main(){
    cout<<"Print Number"<<endl;
    funn();
    return 0;
}


*/

/*
// 😍Recursion -2...

//🍀 Print Name 5 times,

int i = 0;
void name()
{
    if (i == 5)
        return;
    cout << i + 1 << ") Rahul" << endl;
    i++;
    name();
}

// 🍀print linearly from 1 to n

int j = 0;
void num(int n)
{
    if (j == n)
        return;
    cout << j + 1 << endl;
    j++;
    num(n);
}

//🍀 print linearly from N to 1;
void numm(int n){
    if(n==0) return;
    cout<< n <<endl;
    numm(n-1);
}

//🍀 print  from 1 to n by backtracking
void backtrack(int k , int s){
    if(k<1) return;

    backtrack(k-1,s);  //backtracking
    cout<<k<<endl;
}

//🍀 print  from n to 1 by backtracking
void backtrackinc(int k , int s){
    if(k>s) return;

    backtrackinc(k+1,s);  //backtracking
    cout<<k<<endl;
}
int main()
{

    int n;
    cin >> n;
    backtrackinc(1,n);

    // cout<<"Print name 5 Times Using Recursion"<<endl;
    // name();
}

*/
/*
// 😍Recursion -3...

// 🍀Sum of n numbers
// 1)Parametrised Way

void sumpara(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sumpara(i - 1, sum + i);
}

// 2) Functional way
int sumfunc(int n)
{
    if (n == 0)
        return 0;

    return n + sumfunc(n - 1);
}

// 🍀Calculate Factorial by using recursion
int fact(int x)
{
    if (x == 1)
        return 1;
    if (x == 0)
        return 0;

    return x * fact(x - 1);
}

// 🍀Reverse an array by using recursion
void reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

// 🍀Check a string is palendrome or not
bool palendrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return 1;
    if (s[i] != s[s.size() - i - 1])
        return 0;
    return palendrome(i + 1, s);
}
int main()
{
    // int n;
    // cin >> n;
    string s = "umadamu";
    int ans = palendrome(0, s);
    if (ans)
    {
        cout << "Yes Palendrome" << endl;
    }
    else
    {
        cout << "Not palendrome" << endl;
    }

    // int brr[5] ={2,5,4,3,1};
    // int m=5;
    // reverse(0, brr,m );
    // for (int i = 0; i < m; i++)
    // {
    //    cout<<brr[i]<<" ";
    // }

    // int ans = fact(n);
    // cout << ans << endl;

    // int ans = sumfunc(n);
    // cout << ans << endl;

    // sumpara(n, 0);
}


// 😍Recursion -4...
// 🍀 multiple Recuesion call
// Fibonachhi series
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibo(n - 1);        // first run first execute
    int sencondLast = fibo(n - 2); // after first execute then its run
    return last + sencondLast;
}

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibo(n)<<endl;
//     return 0;
// }

// 🍀 Print All Subsequences
// a contigious or noncontigious sequences, which follows the order
void printSub(int idx, vector<int> &ds, int arr[], int n)
{
    if(idx==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[idx]);
    printSub(idx+1,ds,arr,n);
    ds.pop_back();

    // not pick or not take condition, this element is not added to your subsecuence
    printSub(idx+1,ds,arr,n);

}

int main(){
    int arr[]= {3,1,2};
    int n=3;
    vector<int>ds;
    printSub(0,ds,arr,n);
    return 0;
}
*/


