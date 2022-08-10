#include<bits/stdc++.h>
using namespace std;
int hexaToDecimal(string n){
    int ans=0;
    int base=1;
    int s=n.size();
    for (int i = s-1; i >= 0; i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=base*(n[i]-'0');
        }
        else if(n[i]>='a' && n[i]<='f'){
            ans+=base*(n[i]-'a'+10);
        }
        base*=16;
    }
    return ans;
}
int main(){
    string n;
    cout<<"Enter any binary number : ";
    cin>> n;
    cout<<hexaToDecimal(n)<<endl;
    return 0;
}