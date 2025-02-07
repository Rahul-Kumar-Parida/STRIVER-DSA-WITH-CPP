#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    int freq[26]={0};
    for(int i=0;i<n;i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        if(freq[str[i]-'a']==1){
            cout<<str[i];
        }
    }
    return 0;
}