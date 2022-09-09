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
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    if(isPrime(num)){
        cout<<"Number is prime.\n";
    }
    else{
        cout<<"Number is not prime.\n";
    }
    return 0;
}