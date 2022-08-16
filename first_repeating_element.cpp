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
    const int n=1e6+2;
    int idx[n];
    for (int i = 0; i < n; i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0; i<num; i++){
        if(idx[arr[i]] != -1){
            minidx=min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"first repeating element is at index "<<minidx+1<<endl;
    }
}