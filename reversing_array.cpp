#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter the elements of array : ";
        cin>>arr[i];
    }
    i--;
    cout<<"Reversing array is : ";
    while(i>=0){
        cout<<arr[i]<<" ";
        i--;
    }
    cout<<endl;
    return 0;
}