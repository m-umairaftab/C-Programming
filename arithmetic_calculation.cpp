#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the 2nd number : ";
    cin>>n2;
    cout<<"Enter any operator (+,-,*,/) : ";
    cin>>op;
    switch (op)
    {
    case '+' :
        cout<<"Sum is "<<n1+n2<<endl;
        break;
    case '-' :
        cout<<"Subtraction is "<<n1-n2<<endl;
        case '*' :
        cout<<"SProduct is "<<n1*n2<<endl;
        case '/' :
        cout<<"Division is "<<n2/n1<<endl;
    default:
        cout<<"Enter another operator.";
        break;
    }
    return 0;
}