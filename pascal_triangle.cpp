#include<iostream>
using namespace std;
int fac(int num){
    int fact=1;
    for(int i=1;i<=num; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number of rows : ";
    cin>>num;
    for(int i=0; i<num; i++){
        for(int j=0; j<=i; j++){
            cout<<fac(i)/(fac(j)*fac(i-j))<<" "; 
        }
        cout<<endl;
    }
    return 0;
}