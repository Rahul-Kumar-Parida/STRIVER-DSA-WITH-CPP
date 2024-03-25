#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 😍 hasing (PreStore/Fetch)..........................

//🍀🍀🍀🍀 Working on array....
// int hashglobal[10000000]; //(store 10^7)
//  int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for (int i = 0; i < n; i++)
//      {
//          cin>>arr[i];
//      }

//     int hash[13] = {0};  //store (10^6)
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] +=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;
// }

//🍀🍀🍀🍀  Working on Char array....

// int main(){
//     string s;
//     cin>>s;

//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char ch;
//         cin>>ch;
//         cout<<hash[ch-'a']<<endl;
//     }
//     return 0;
// }
// 🍀another method for all
// int main()
// {
//     string s;
//     cin >> s;

//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i]]++;
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char ch;
//         cin >> ch;
//         cout << hash[ch] << endl;
//     }
//     return 0;
// }



//🍀🍀🍀🍀 stl : map or unordered map using on array
//map (sorted order)
//unordered_map( not sorted ordered)

//  int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for (int i = 0; i < n; i++)
//      {
//          cin>>arr[i];
//      }

//     map<int, int>mpp;
//    // unordered_map<int, int>mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]] +=1;
//     }


//for iterate int the map
// for(auto it: mpp){
//     cout<<it.first<<"-->"<<it.second<<endl;
// }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<mpp[number]<<endl;
//     }
//     return 0;
// }