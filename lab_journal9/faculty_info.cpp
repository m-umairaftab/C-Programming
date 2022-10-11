#include<bits/stdc++.h>
using namespace std;
class Faculty {
    protected:
        string name;
        int id;
    public:
        Faculty(string name, int id){
            this->name=name;
            this->id=id;
        }
        virtual void salary()=0;
};
class PermanentFaculty : public Faculty {
    protected:
        int yearsOfService, basicPay;
    public:
        PermanentFaculty(string name, int id):Faculty(name, id){
            cout<<"Permanent faculty name is : "<<name<<endl;
            cout<<"Permanent faculty id is : "<<id<<endl;
        }
        void salary(){
            cout<<"Enter your basic pay : ";
            cin>>basicPay;
            cout<<"Permanent faculty salary is : "<<basicPay+((basicPay*10)/100)+((basicPay*25)/100)<<endl;
        }
};
class VisitingFaculty : public Faculty {
    protected:
        int hoursRate, hoursTaught;
    public:
        VisitingFaculty(string name, int id):Faculty(name, id){
            cout<<"Visiting faculty name is : "<<name<<endl;
            cout<<"Visiting faculty id is : "<<id<<endl;
        }
        void salary(){
            cout<<"Enter the number of per hour rate : ";
            cin>>hoursRate;
            cout<<"Enter the number of hours that taughts : ";
            cin>>hoursTaught;
            cout<<"Visiting faculty salary is : "<<hoursRate*hoursTaught<<endl;
        }
};
int main(){
    // Faculty Faculty("Umair", 1);
    Faculty *ptr1, *ptr2;
    PermanentFaculty perma("Umair", 1);
    ptr1=&perma;
    ptr1->salary();
    VisitingFaculty visit("Aftab", 2);
    ptr2=&visit;
    ptr2->salary();
    return 0;
}