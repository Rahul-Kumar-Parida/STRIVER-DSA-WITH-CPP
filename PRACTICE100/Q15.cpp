#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>ans;
    unordered_map<int,int>Map;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(Map[arr[i]]==0){
            ans.push_back(arr[i]);
        }
        Map[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(Map[ans[i]]==1){
            cout<<ans[i]<<" ";
        }
    }
    return 0;

}