#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int sum=0;
    for(int i=n1;i<=n2;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}