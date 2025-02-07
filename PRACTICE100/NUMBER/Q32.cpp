#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=1,ans=0;
    while(n>0){
        int d=n%10;
        if(d==0){
            d=1;
        }
        ans=temp*d+ans;
        n/=10;
        temp*=10;
    }
    cout<<ans<<endl;
    return 0;
}