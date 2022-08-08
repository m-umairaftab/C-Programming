#include<iostream>
using namespace std;
int main(){
    int num,lastDigit;
    cout<<"Enter any digit : ";
    cin>>num;
    do {
        lastDigit=num%10;
        num/=10;
        cout<<lastDigit;
    } while (num>10);
    cout<<num<<endl;
    return 0;
}