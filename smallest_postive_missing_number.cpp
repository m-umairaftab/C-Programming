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
    bool check[n];
    for(int i=0; i<n; i++){
        check[i]=false;
    }
    for(int i=0; i<num; i++){
        if(arr[i]>0){
            check[arr[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1; i<n; i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}