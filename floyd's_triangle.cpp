#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter the number of row : ";
    cin>>n;
    cout<<"Enter the number of count : ";
    cin>>count;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
    return 0;
}