#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(char &ch:str){
        if(ch>='a'&&ch<='z'){
            ch=ch-32;
        }else if(ch>='A'&&ch<='Z'){
            ch=ch+32;
        }
    }
    cout<<str<<endl;
    return 0;
}