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
    int rowStart=0,rowEnd=row-1,colStart=0,colEnd=col-1;
    cout<<"Spiral matrix is : "<<endl;
    while(rowStart<=rowEnd && colStart<=colEnd){
        for(int column=colStart; column<=colEnd; column++){
            cout<<arr[rowStart][column]<<" ";
        }
        rowStart++;
        cout<<endl;
        for(int rows=rowStart; rows<=rowEnd; rows++){
            cout<<arr[rows][colEnd]<<" ";
        }
        colEnd--;
        cout<<endl;
        for(int column=colEnd; column>=colStart; column--){
            cout<<arr[rowEnd][column]<<" ";
        }
        rowEnd--;
        cout<<endl;
        for(int rows=rowEnd; rows>=rowStart; rows--){
            cout<<arr[rows][colStart]<<" ";
        }
        colStart++;
        cout<<endl;
    }
    return 0;
}