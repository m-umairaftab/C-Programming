#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
void getInput(point &p1, point &p2){
    cout<<"Enter the value of X1 : ";
    cin>>p1.x;
    cout<<"Enter the value of Y1 : ";
    cin>>p1.y;
    cout<<"Enter the value of X2 : ";
    cin>>p2.x;
    cout<<"Enter the value of Y2 : ";
    cin>>p2.y;
}
point addPoints(point p1, point p2){
    point result;
    result.x=p1.x + p2.x;
    result.y=p1.y + p2.y;
    return result;
}
int main(){
    point p1,p2,result;
    getInput(p1, p2);
    result=addPoints(p1, p2);
    cout<<"Sum of two points is ("<<result.x<<","<<result.y<<")"<<endl;
    return 0;
}