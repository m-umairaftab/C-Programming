#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int base=1;
    int ans=0;
    while(base<=n){
        base*=2;
    }
    base/=2;
    while(base > 0){
        int lastDigit=n/base;
        n-=lastDigit*base;
        base/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter any decimal number : ";
    cin>>num;
    cout<<"Conversion from decimal to binary is "<<decimalToBinary(num)<<endl;
    return 0;
}