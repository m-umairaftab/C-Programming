#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int num, int key){
    int startingPoint=0;
    int endingPoint=num;
    while (startingPoint<=endingPoint){
        int midPoint=(startingPoint+endingPoint)/2;
        if(arr[midPoint]==key){
            return midPoint;
        }
        else if(arr[midPoint]>key){
            endingPoint=midPoint-1;
        }
        else{
            endingPoint=midPoint+1;
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
    cout<<binarySearch(arr, num, key)<<endl;
}