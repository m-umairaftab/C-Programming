#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the size of array : ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter an array element : ";
        cin>>arr[i];
    }
    for(int i=0; i<num; i++){
        for(int j=i; j<num; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}