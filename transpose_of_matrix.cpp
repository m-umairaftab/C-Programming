#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>col;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"Transpose of matrix is : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}