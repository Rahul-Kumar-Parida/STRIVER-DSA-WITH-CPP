#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[k];
    for(int i=n-k;i<n;i++){
        temp[i-n+k]=arr[i];
    }
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}