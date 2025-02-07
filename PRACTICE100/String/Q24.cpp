#include<iostream>
#include<unordered_map>
using namespace std;
int totalfreq(string str){
    unordered_map<char,int>Map;
    int max1=0;
    for(char ch:str){
        Map[ch]++;
        if(Map[ch]>max1){
            max1=Map[ch];
        }
    }
    return max1;
}
int main(){
    string str;
    getline(cin,str);
    int j=0;
    int maxi=-1;
    string s;
    for(int i=0;i<str.length();i++){
        
        if(str[i]==' ' ){
        string w=str.substr(j,i-j);
            int n1=totalfreq(w);
            if(n1>maxi){
                maxi=n1;
                s=w;
            }
            j=i+1;
        }
    }
    if(maxi<=1){
        cout<<-1<<endl;
    }else{
        cout<<s<<endl;
    }
    
    return 0;
}