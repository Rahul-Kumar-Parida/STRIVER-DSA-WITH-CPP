#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    int orig=n;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if(orig==rev){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}