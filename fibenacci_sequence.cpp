#include<iostream>
using namespace std;
void fib(int num){
    int t1=0,t2=1;
    int nextTerm;
    for(int i=1; i<=num; i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    fib(num);
    return 0;
}