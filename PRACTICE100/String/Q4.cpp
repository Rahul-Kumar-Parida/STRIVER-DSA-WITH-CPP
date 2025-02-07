#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char ch =tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            str=str.substr(0,i)+str.substr(i+1);
            i--; 
        }
        
    }
    
    cout<<str<<endl;
    return 0;

}