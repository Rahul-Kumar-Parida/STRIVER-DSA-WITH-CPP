#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n,r;
    cin>>n>>r;
    int permu=factorial(n)/factorial(n-r);
    cout<<permu<<endl;
    return 0;
}