#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int num){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<num; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
    int num;
    cout<<"Enter the size of array : ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter an array element : ";
        cin>>arr[i];
    }
    int wrapsum,nonwrapsum;
    nonwrapsum=kadane(arr, num);
    int totalSum=0;
    for(int i=0; i<num; i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalSum+kadane(arr,num);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}