#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    int i=0;
    int currLen=0,maxLen=0,st=0,maxSt=0;
    while(true){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen > maxLen){
                maxLen=currLen;
                maxSt=st;
            }
            currLen=0;
            st=i+1;
        }
        else{
            currLen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0; i<maxLen; i++){
        cout<<arr[i+maxSt];
    }
    cout<<endl;
    return 0;
}