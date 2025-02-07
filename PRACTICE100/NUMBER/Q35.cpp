#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=b*b-(4*a*c);
    double sq=sqrt(abs(d));
    int result=0;
    if(d>0){
        double root1=(double)(-b+sq)/(2*a);
        double root2=(double)(-b-sq)/(2*a);
        cout<<root1<<" "<<root2;
    }else if(d==0){
        double root = -(double)b/(2*a);
        cout<<root<<" "<<root;
    }else{
        cout<<-(double)b/(2*a)<<" +i"<<sq<<endl;
        cout<<-(double)b/(2*a)<<" -i"<<sq<<endl;
    }

    return 0;

}