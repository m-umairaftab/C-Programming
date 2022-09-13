#include<bits/stdc++.h>
using namespace std;
class CRectangle{
    int x, y;
    public:
    CRectangle(){
        x=3;
        y=4;
    }
    CRectangle(int a, int b){
        x=a;
        y=b;
    }
    int area(){
        return x*y;
    }
};
int main(){
    CRectangle rect(5, 4), rectb;
    cout<<"Area is "<<rect.area()<<endl;
    cout<<"Area is "<<rectb.area()<<endl;
    return 0;
}