#include<iostream>
using namespace std;
bool check(int x, int y, int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if((a*a)==(b*b+c*c)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    if (check(num1,num2,num3)){
        cout<<"pythagorian triplet.\n";
    }
    else{
        cout<<"Not a pythagorian triplet.\n";
    }
    return 0;
}