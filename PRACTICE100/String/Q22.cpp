#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();

    // sort(str.begin(),str.end());
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(str[j]<str[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            swap(str[i],str[mini]);
        }
    }
    cout<<str<<endl;
    return 0;
}