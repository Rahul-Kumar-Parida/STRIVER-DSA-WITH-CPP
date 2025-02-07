#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=x;
    }
    cout<<ans<<endl;
    return 0;
}