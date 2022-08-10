#include<iostream>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int power=1;
    while (n>0)
    {
        int lastDigit=n%10;
        ans+=power*lastDigit;
        power*=2;
        n/=10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter any binary number : ";
    cin>> num;
    cout<<binaryToDecimal(num)<<endl;
    return 0;
}