#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str1,str2;
    cout<<"Enter the first string : ";
    cin>>str1;
    cout<<"Enter the second string : ";
    cin>>str2;
    str=str1+str2;
    cout<<str<<endl;
    str[3]='d';
    cout<<str<<endl;
    return 0;
}