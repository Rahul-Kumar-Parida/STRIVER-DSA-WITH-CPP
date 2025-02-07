#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int freq[26]={0};
    for(char ch:str){
        freq[ch-'a']++;
    }
    int maxi=-1;
    char ch;
    for(int i=0;i<26;i++){
        if(freq[i]>maxi){
            maxi=freq[i];
            ch=char(i+'a');
        }
    }
    cout<<ch<<endl;
    return 0;
}