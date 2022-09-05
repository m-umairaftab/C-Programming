#include<bits/stdc++.h>
using namespace std;
int divisible(int num1, int num2, int num3){
int c1=num1/num2;
int c2=num1/num3;
int c3=num1/(num2*num3);
return c1+c2-c3;
}
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    cout<<divisible(num1,num2,num3)<<endl;
    return 0;
}