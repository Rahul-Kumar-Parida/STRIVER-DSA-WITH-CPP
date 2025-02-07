#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n/2;i++){
        arr[i]=arr[k++];
    }
    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}