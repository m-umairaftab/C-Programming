#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    for(int i=num1; i<=num2; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}