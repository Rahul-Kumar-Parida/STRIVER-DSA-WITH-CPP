#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans.push_back(arr[i]);
        }
    }
    for(int it:ans){
        cout<<it<< " ";
    }
    return 0;
}