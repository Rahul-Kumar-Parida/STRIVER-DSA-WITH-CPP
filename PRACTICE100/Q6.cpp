#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int l=n/2;
    int r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}