#include<iostream>
using namespace std;
int main(){
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney==0){
            break;
        }
        cout<<date<<"..Go out today \n";
        pocketMoney-=300;
        cout<<"Remaining pocket money is "<<pocketMoney<<endl;
    }
    return 0;
}