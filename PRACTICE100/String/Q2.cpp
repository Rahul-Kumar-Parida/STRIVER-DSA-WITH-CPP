#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int vowel=0;
    int consonant=0;
    int space=0;
    for(char ch:str){
        char c=tolower(ch);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            vowel++;
        }else if(c==' '){
            space++;
        }else if(c>='a' && c<='z'){
            consonant++;
        }
    }

    cout<<vowel<<" "<<consonant<<" "<<space;
    return 0;
}