#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }
    int temp=1;
    sort(brr,brr+n);
    unordered_map<int,int>Map;
    for(int i=0;i<n;i++){
        if(Map.find(brr[i])==Map.end()){
            Map[brr[i]]=temp;
            temp++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<Map[arr[i]]<<" ";
    }
    return 0;
}