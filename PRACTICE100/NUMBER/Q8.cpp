#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<"pos"<<endl;
    }else if(n==0){
        cout<<"zero"<<endl;
    }else{
        cout<<"neg"<<endl;
    }
    return 0;
}