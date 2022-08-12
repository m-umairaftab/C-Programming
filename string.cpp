#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str1,str2,str3,str4="786";
    cout<<"Enter the first string : ";
    getline(cin,str1);
    cout<<"Enter the second string : ";
    getline(cin,str2);
    int add=stoi(str4);
    cout<<add+2<<endl;
    cout<<to_string(add)+"2"<<endl;
    str3="my name is umair";
    cout<<str3.find("name")<<endl;
    cout<<str3<<endl;
    sort(str3.begin(),str3.end());
    cout<<str3<<endl;
    cout<<str3.size()<<endl;
    cout<<str3.insert(3,"name")<<endl;
    cout<<str3.substr(3,4)<<endl;
    str3.clear();
    if(str3.empty()){
        cout<<"String is empty."<<endl;
    }
    str=str1+str2;
    cout<<str<<endl;
    str[3]='d';
    cout<<str<<endl;
    str.erase(3,2);
    cout<<str<<endl;
    if(str1.compare(str2)){
        cout<<"strings are equal."<<endl;
    }
    else{
        cout<<"strings are not equal."<<endl;
    }
    return 0;
}