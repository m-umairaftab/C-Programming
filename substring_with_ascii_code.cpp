#include<bits/stdc++.h>
using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int ascii=ch;
    string ros=s.substr(1);
    subseq(ros, ans);
    subseq(ros, ch+ans);
    subseq(ros, to_string(ascii)+ans);
}
int main(){
    subseq("ABC","");
    cout<<endl;
    return 0;
}