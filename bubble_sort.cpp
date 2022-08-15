#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the size of array : ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter an array : ";
        cin>>arr[i];
    }
    int counter=1;
    while(counter<num){
        for(int i=0; i<num-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}