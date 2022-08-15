#include<bits/stdc++.h>
using namespace std;
int linearSarch(int arr[], int num, int key){
    for(int i=0; i<num; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int num,key;
    cout<<"Enter the size of array : ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key that we want to find : ";
    cin>>key;
    cout<<linearSarch(arr, num, key)<<endl;
}