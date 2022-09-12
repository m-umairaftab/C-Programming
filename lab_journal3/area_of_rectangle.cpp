#include<bits/stdc++.h>
using namespace std;
struct rectangle{
    int topLeft, bottomRight;
};

int computeArea(rectangle p){
    int area;
    area=p.topLeft*p.bottomRight;
    return area;
}

int main(){
    rectangle p1;
    int area;
    cout<<"Enter the value of top_left : ";
    cin>>p1.topLeft;
    cout<<"Enter the value of bottom_right : ";
    cin>>p1.bottomRight;
    area=computeArea(p1);
    cout<<"Area is "<<area<<endl;
    return 0;
}