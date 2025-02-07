#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pd=n*n;
    int tmp=1;
    int rev=0;
    while(pd>0){
        int digit=pd%10;
        rev=digit*tmp+rev;
        if(rev==n){
            cout<<"auto"<<endl;
            return 0;
        }
        pd/=10;
        tmp*=10;
    }
    cout<<"no"<<endl;
    return 0;
}