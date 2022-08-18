#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows,col;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>col;
    int arr[rows][col];
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int nmbrFind;
    cout<<"Enter the value tha we find in matrix : ";
    cin>>nmbrFind;
    bool flag=false;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            if(arr[i][j]==nmbrFind){
                cout<<"ELement is found in "<<i<<" row and "<<j<<" column."<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found in this matrix."<<endl;
    }
    else{
        cout<<"Element is not found in this matrix : "<<endl;
    }
    return 0;
}