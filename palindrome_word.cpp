#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the size of array : ";
    cin>>num;
    char arr[num+1];
    cin>>arr;
    bool check=true;
    for(int i=0; i<num; i++){
        if(arr[i] != arr[num-1-i]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"Word is palindrome.\n";
    }
    else{
        cout<<"Word is not palindrome.\n";
    }
    return 0;
}