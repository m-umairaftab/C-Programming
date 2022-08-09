#include<iostream>
using namespace std;
int fac(int num){
    int fact=1;
    for(int i=1;i<=num; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter any number for n: ";
    cin>>n;
    cout<<"Enter any number for r: ";
    cin>>r;
    int ans=fac(n)/fac(r)*fac(n-r);
    cout<<ans<<endl;
    return 0;
}