#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string news="";
    for(char ch: str){
        if((ch>='a'&& ch<='z') || (ch>='A'&&ch<='Z')){
            news+=ch;
        }
    }
    cout<<news<<endl;
    return 0;
}