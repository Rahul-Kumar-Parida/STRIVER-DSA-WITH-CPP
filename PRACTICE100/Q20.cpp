#include<iostream>
using namespace std;
// int main(){
//     int n,k; //Right rotate;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int temp[k];
//     for(int i=n-k;i<n;i++){
//         temp[i-n+k]=arr[i];
//     }
//     for(int i=n-k-1;i>=0;i--){
//         arr[i+k]=arr[i];
//     }
//     for(int i=0;i<k;i++){
//         arr[i]=temp[i];
//     }
//     for(int it:arr){
//         cout<<it<<" ";
//     }
//     return 0;
// }

int main(){
    int n,k; //Left rotate;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k ;i++){
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }
    for(int it:arr){
        cout<<it<<" ";
    }
    return 0;
}