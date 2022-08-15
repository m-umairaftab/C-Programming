#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,mx=-199999;
    cout<<"Enter the size of array : ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter an array element : ";
        cin>>arr[i];
    }
    int curr=0;
    for(int i=0; i<num;i++){
        curr=0;
        for(int j=i; j<num; j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}