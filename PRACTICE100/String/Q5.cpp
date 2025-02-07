#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int j=0;
    string news="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            news+=str[i];
        }
    }
    cout<<news<<endl;
    return 0;
}