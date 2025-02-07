#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n];
    int a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    unordered_map<int,int>Map2;
    for(int i=0;i<m;i++){
        cin>>a2[i];
        Map2[a2[i]]++;
    }
    
    for(int it:a1){
        if(Map2.find(it)==Map2.end()){
            cout<<"No";
            return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
}