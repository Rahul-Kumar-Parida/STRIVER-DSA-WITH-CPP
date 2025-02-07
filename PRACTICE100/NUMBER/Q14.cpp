#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0){
        cout<<"leap"<<endl;
    }else if(n%4==0 && n%100!=0){
        cout<<"leap"<<endl;
    }else{
        cout<<"not"<<endl;
    }
    return 0;
}