#include<bits/stdc++.h>
using namespace std;
void sum(int arr[], int size, int num){
    int sum=0;
    for(int i=0; i<size; i++){
        if(arr[i]%num==0){
            sum+=arr[i];
        }
    }
    cout<<"Sum of multiple of 5 is "<<sum<<endl;
}
int main(){
    int size,num=5;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter the element of array : ";
        cin>>arr[i];
    }
    sum(arr,size,num);
    return 0;
}