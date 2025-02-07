#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"Not anagram"<<endl;
        return 0;
    }
    unordered_map<char,int>Map;
    for(char ch:s1){
        Map[ch]++;
    }
    for(char ch:s2){
        Map[ch]--;
    }
    for(auto it:Map){
        if(it.second != 0){
            cout<<"Not anagram"<<endl;
            return 0;
        }
    }
    cout<<"anagram"<<endl;
    return 0;
}