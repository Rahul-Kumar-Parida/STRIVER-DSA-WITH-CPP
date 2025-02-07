#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[],int n){
    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    return (second==INT_MIN)?-1:second;
}
int secondSmallest(int arr[],int n){
    int first=INT_MAX;
    int second=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    return (second==INT_MAX)?-1:second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int small=secondSmallest(arr,n);
    int large=secondLargest(arr,n);
    cout<<small<<" "<<large;
    return 0;
}