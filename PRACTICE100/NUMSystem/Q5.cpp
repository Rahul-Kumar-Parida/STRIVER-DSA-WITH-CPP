#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
      if (n == 0) {
        cout << "0" << endl;
        return 0;
    }
    int deci=0;
    int tmp=1;
    while(n!=0){
        int d=n%10;
        deci+=d*tmp;
        tmp*=8;
        n/=10;
    }
    string bin="";
    while(deci>0){
        int dd=deci%2;
        bin=to_string(dd)+bin;
        deci/=2;
    }
    cout<<bin<<endl;
    return 0;
}