#include<iostream>
#include<iomanip>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<fixed<<setprecision(1)<< sum/n<<endl;
    return 0;
    
 }