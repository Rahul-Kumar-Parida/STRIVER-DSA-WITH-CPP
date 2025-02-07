#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>Map;
    vector<int>order;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(Map[arr[i]]==0){
            order.push_back(arr[i]);
        }
        Map[arr[i]]++;
    }
    
    for(int i=0;i<order.size();i++){
        cout<<order[i]<<":"<<Map[order[i]]<<" ";
    }
    
    return 0;
}