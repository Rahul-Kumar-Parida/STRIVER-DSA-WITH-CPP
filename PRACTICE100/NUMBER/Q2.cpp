#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int rev=0;
    int org=n;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return (org==rev)?1:0;
}
int main(){
    int min,max;
    cin>>min>>max;
    for(int i=min;i<=max;i++){
        if(ispalindrome(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}