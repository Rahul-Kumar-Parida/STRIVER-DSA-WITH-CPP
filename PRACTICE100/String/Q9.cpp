#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int sum=0;
    string totalsum="";
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]>='0'&&str[i]<='9'){
            totalsum+=str[i];
        }
        else{
            sum+=atoi(totalsum.c_str());
            totalsum="";
        }
    }

    cout<<sum+atoi(totalsum.c_str())<<endl;
    return 0;
}