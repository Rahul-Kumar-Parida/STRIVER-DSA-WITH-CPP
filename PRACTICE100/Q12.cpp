#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>Map;
    for(int it:arr){
        if(Map.find(it)==Map.end()){
            cout<< it<<" ";
            Map[it]++;
        }

    }

    return 0;
}