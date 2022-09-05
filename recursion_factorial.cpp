#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prevFact=factorial(n-1);
    return n*prevFact;
}
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    cout<<factorial(num)<<endl;
    return 0;
}