#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int l=0;
    int r= str.length()-1;
    while(l<r){
        swap(str[l],str[r]);
        l++;
        r--;
    }
    cout<<str<<endl;
    return 0;
}