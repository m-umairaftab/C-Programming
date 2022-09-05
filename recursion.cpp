#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum=sum(n-1);
    return n+prevSum;
}
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    cout<<sum(num)<<endl;
    return 0;
}