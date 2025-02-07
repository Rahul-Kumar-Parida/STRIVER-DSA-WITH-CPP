#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    int freq[26]={0};
    string news="";
    for(int i=0;i<str.length();i++){
        if(freq[str[i]-'a']==0){
            news+=str[i];
            freq[str[i]-'a']=1;
        }
    
    }
    cout<<news<<endl;
    return 0;
}