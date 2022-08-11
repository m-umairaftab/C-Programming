#include<bits/stdc++.h>
using namespace std;
string decimalToHexa(int n){
    int base=1;
    string ans="";
    while(base<=n){
        base*=16;
    }
    base/=16;
    while(base>0){
        int lastDigit=n/base;
        n-=lastDigit*base;
        base/=16;
        if(lastDigit<=9){
            ans=ans+to_string(lastDigit);
        }
        else{
            char c='A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter the decimal number : ";
    cin>>num;
    cout<<"Conversion from decimal to hexadecimal is "<<decimalToHexa(num)<<endl;
    return 0;
}