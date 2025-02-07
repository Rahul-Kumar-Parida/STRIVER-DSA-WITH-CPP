#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float a,r,n;
    cin>>a>>r>>n;
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=a;
        a*=r;
    }
    cout<<sum<<endl;
    return 0;

}