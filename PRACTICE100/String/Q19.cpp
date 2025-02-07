#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    string news="";
    unordered_map<char,int>Map;
    for(char ch:str2){
        Map[ch]++;
    }
    for(auto it:str1){
        if(Map.find(it)==Map.end()){
            news+=it;
        }
    }
    cout<<news<<endl;
    return 0;
}
