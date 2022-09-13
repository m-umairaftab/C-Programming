#include<bits/stdc++.h>
using namespace std;
class CRectangle{
    int x, y;
    public:
    void setValues(int a, int b){
        x=a;
        y=b;
    }
    int area(){
        return x*y;
    }
};
int main(){
    CRectangle rect,*rectb;
    rectb=&rect;
    rect.setValues(5, 4);
    cout<<"Area is "<<rect.area()<<endl;
    rectb->setValues(3, 4);
    cout<<"Area is "<<rectb->area()<<endl;
    return 0;
}