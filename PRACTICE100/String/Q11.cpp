#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str;
    cin>>str;
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<(char)(i+'a')<<freq[i]<<" ";
        }
    }
    return 0;
}