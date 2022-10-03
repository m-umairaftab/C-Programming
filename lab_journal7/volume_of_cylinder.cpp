#include<bits/stdc++.h>
using namespace std;
class Point {
    protected:
        int x, y;
    public:
        Point(){
            x=0;
            y=0;
       }
       void setX(int valX) {
            x = valX; 
        }
        void setY(int valY) {
            y = valY; 
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void display(int x, int y) {
            cout<<"The co-ordinates of point are=   "<<x<<"   ,  "<<y<<endl;
        }
};
class Circle : public Point {
    protected:
        int rad;
        float area, circum; 
    public:
        void setRad(int valRad){
            rad=valRad;
        }
        int getRad() const {
            return rad;
        }
        void calculate(){
            area=(float)3.14*rad*rad;
            circum=2*3.14*rad;
        }
        void print(){
            cout<<"The radius of the circle is : "<<rad<<endl;
            cout<<"The area of the circle is : "<<area<<endl;
            cout<<"The circumferance of a circle is "<< circum<<endl;
        }
};
class Cylinder : public Circle {
    float height,areaOfCylinder, volumeOfCylinder;
    public:
        void setHeight(float valHeight){
            height=valHeight;
        }
        float getHeight() const {
            return height;
        }
        void calculation(){
            area=(float)3.14*rad*rad;
            areaOfCylinder=(2*area) + (2*3.14*rad*height);
            volumeOfCylinder=3.14*rad*rad*height;
        }
        void output(){
            cout<<"Area of cylinder is : "<<areaOfCylinder<<endl;
            cout<<"Volume of cylinder is : "<<volumeOfCylinder<<endl;
        }
};
int main(){
    Cylinder c2;
    c2.setRad(4);
    c2.setHeight(6);
    c2.calculation();
    c2.output();
    return 0;
}