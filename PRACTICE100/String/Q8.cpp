#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string newstr="";
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' ||str[i]==')'){
            continue;
        }
        newstr+=str[i];
    }
    cout<<newstr<<endl;
    return 0;
}