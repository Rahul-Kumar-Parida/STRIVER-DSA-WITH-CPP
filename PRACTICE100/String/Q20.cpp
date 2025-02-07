#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(char &ch:str){
        if(ch=='z'){
            ch='a';
        }else if(ch=='Z'){
            ch='A';
        }else if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z')){
            ch=ch+1;
        }
    }
    cout<<str<<endl;
    return 0;
}