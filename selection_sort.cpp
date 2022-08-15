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
    for(int i=0; i<num-1; i++){
        for(int j=i+1; j<num; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}