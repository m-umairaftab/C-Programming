#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"Enter any digit : ";
    cin>>n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Number is not prime.\n";
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Number is prime."<<endl;
    }
    return 0;
}