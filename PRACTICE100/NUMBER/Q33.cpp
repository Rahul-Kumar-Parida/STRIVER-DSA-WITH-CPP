#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

bool prime(int n){
    for (int i = 2; i <= n / 2; i++) {
        int complement = n - i;
        if (isprime(i) && isprime(complement)) {
            // If both i and complement are prime numbers
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(prime(n)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}