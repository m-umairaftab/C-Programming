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
    CRectangle rect;
    rect.setValues(5, 4);
    cout<<"Area is "<<rect.area()<<endl;
    return 0;
}