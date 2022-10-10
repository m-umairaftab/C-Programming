#include<bits/stdc++.h>
using namespace std;
template <class parameter> parameter temp(parameter a, parameter b){
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    return true;
}
int main(){
    temp(4, 5);
    temp(4.5, 3.5);
    return 0;
}