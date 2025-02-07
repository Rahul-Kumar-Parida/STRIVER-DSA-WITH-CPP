#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pre=1;
    int suff=1;
    int maxsub=INT_MIN;
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suff==0) suff=1;
        pre=pre*arr[i];
        suff=suff*arr[n-i-1];
        int mx=max(pre,suff);
        maxsub=max(maxsub,mx);
    }
    cout<<maxsub<<endl;
    return 0;
}