#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter any number : ";
    cin>>num;
    int origionalNum=num;
    while (num>0)
    {
        int lastDigit=num%10;
        sum+=pow(lastDigit,3);
        num/=10;
    }
    if(sum==origionalNum){
        cout<<"Number is Armstrong.\n";
    }
    else{
        cout<<"Number is not Armstrong.\n";
    }
    return 0;
}