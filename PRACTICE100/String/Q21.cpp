#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string w;
    int j=0;
    int maxi=-1;
    
    for(int i=0;i<=str.length();i++){
        int count=0;
        if(str[i]==' ' || i==str.length()){
            int count=i-j;
            if(count>maxi){
                maxi=count;
                w=str.substr(j,count);
            }
            j=i+1;
        }
    }

    cout<<w<<endl;
    return 0;
}