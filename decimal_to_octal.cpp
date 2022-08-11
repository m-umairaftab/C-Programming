#include<bits/stdc++.h>
using namespace std;
int decimalToOctal(int n){
    int base=1;
    int ans=0;
    while(base<=n){
        base*=8;
    }
    base/=8;
    while(base > 0){
        int lastDigit=n/base;
        n-=lastDigit*base;
        base/=8;
        ans=ans*10+lastDigit;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter any decimal number : ";
    cin>>num;
    cout<<"Conversion from decimal to octal is "<<decimalToOctal(num)<<endl;
    return 0;
}