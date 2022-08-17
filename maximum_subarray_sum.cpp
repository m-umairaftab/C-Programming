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
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<num; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum<<endl;
    return 0;
}