//string to number
#include<iostream>
using namespace std;
int main(){
    string str;  //abc123cf
    cin>>str;
    int sum=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='b'){
            sum=str[i]-'0';
        }
    }
    
    // int ans=stoi(str);
    cout<<sum<<endl;
    return 0;
}