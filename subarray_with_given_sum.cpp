#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,s;

    cout<<"Enter the size of array : ";
    cin>>num;
    cout<<"Enter the number that's find sum : ";
    cin>>s;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter an array element : ";
        cin>>arr[i];
    }
    int st=-1,en=-1,j=0,i=0,sum=0;
    while(j<num && sum+arr[j] <=s){
        sum+=arr[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<num){
        sum+=arr[j];
        while(sum>s){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}