#include<bits/stdc++.h>
using namespace std;
int volume(int x=1, int y=1, int z=1){
    int vol;
    vol=x*y*z;
    return vol;
}
int main(){
    int s1,s2,s3;
    cout<<"Enter the first side : ";
    cin>>s1;
    cout<<"Enter the second side : ";
    cin>>s2;
    cout<<"Enter the third side : ";
    cin>>s3;
    cout<<"Cube of volume is "<<volume()<<endl;
    cout<<"Cube of volume is "<<volume(s1)<<endl;
    cout<<"Cube of volume is "<<volume(s1, s2)<<endl;
    cout<<"Cube of volume is "<<volume(s1, s2, s3)<<endl;
    return 0;
}