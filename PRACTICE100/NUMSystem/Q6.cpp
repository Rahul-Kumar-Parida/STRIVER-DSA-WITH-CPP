#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int deci=0;
    int tmp=1;
    while(n!=0){
        int d=n%10;
        deci+=d*tmp;
        tmp*=8;
        n/=10;
    }
    cout<<deci<<endl;
    return 0;
}