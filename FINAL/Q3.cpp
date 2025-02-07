#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    unordered_map<char,int>Map;
    if(str1.length()!=str2.length()){
        cout<<0<<endl;
        return 0;
    }
    for(char ch:str1){
        Map[ch]++;
    }
    for(char ch:str2){
        Map[ch]--;
    }
    bool check=true;
    for(auto it:Map){
        if(it.second!=0){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}