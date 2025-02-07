#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=INT_MIN;
    int min=INT_MAX;
    while(n>0){
        int digit=n%10;
        if(digit>max){
            max=digit;
        }
        if(digit<min){
            min=digit;
        }
        n/=10;
    }
    cout<<min<<" "<<max;
    return 0;
}