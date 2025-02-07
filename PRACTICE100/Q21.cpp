#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int totalsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totalsum+=arr[i];
    }
    int leftsum=0;
    for(int i=0;i<n;i++){
        totalsum-=arr[i];
        if(totalsum==leftsum){
            cout<<i<<endl;
            return 0;
        }
        leftsum+=arr[i];
    }

    cout<<-1<<endl;
    return 0;
}