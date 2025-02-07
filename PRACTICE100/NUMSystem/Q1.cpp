#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int deci=0;
    int temp=1;
    while(n>0){
        int digit=n%10;
        deci+=digit*temp;
        temp*=2;
        n/=10;
    }
    cout<<deci<<endl;
    return 0;
}