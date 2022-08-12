#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="umair aftab";
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str<<endl;
    return 0;
}