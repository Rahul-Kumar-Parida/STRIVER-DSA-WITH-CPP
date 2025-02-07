//integer to string
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string news="";
    while(n>0){
        int digit=n%2;
        news= to_string(digit)+ news;
        n/=2;
    }
    cout<<news<<endl;
    return 0;
}