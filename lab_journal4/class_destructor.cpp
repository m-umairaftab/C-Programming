#include<bits/stdc++.h>
using namespace std;
class CRectangle{
    int *x, *y;
    public:
    CRectangle(int a, int b){
        x=new int;
        y=new int;
        *x=a;
        *y=b;
    }
    ~CRectangle(){
        delete x;
        delete y;
    }
    int area(){
        return *x * *y;
    }
};
int main(){
    CRectangle rect(5, 4);
    cout<<"Area is "<<rect.area()<<endl;
    return 0;
}