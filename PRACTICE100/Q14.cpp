#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>Map;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        Map[arr[i]]++;
    }
    
    for(auto it:Map){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
    return 0;
}