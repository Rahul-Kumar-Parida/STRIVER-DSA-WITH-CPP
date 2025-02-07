#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i+m-1<n;i++){
        int diff=arr[i+m-1]-arr[i];
        if(diff<mini){
            mini=diff;
        }
    }
    cout<<mini<<endl;
    return 0;
}