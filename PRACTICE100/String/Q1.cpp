#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int l=0;
    int r=str.length()-1;
    while(l<r){
        if(str[l]!=str[r]){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
        l++;
        r--;
    }
    cout<<"Palindrome"<<endl;
    return 0;
}