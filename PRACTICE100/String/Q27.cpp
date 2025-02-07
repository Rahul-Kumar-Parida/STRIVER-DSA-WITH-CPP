#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    auto ans=s1.find(s2);
    cout<<ans<<endl;
    return 0;
}