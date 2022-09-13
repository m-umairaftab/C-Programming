#include<bits/stdc++.h>
using namespace std;
class CRectangle {
    int width, height;
    public:
    void set_values (int, int);
    int area (void) {return (width * height);}
};
void CRectangle::set_values (int a, int b) {
    width = a;
    height = b;
}
    int main () {
    CRectangle a, *b, *c;
    b= new CRectangle;
    c= &a;
    a.set_values (1,2);
    b->set_values (3,4);
    cout << "a area: " << a.area() << endl;
    cout << "*b area: " << b->area() << endl;
    cout << "*c area: " << c->area() << endl; 
    delete b;
    return 0;
}