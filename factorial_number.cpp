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
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    int ans=fac(num);
    cout<<ans<<endl;
    return 0;
}