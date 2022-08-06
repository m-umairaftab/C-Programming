#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of row : ";
    cin>>row;
    cout<<"Enter the number of column: ";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}