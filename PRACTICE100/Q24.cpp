#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==k){
            cout<<mid<<endl;
            return 0;
        }else if(arr[mid]>k){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<-1<<endl;
    return 0;
}