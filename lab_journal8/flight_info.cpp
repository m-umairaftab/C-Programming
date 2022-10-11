#include<bits/stdc++.h>
using namespace std;
class FlightCrew {
    protected:
        int id, years, totalSalary;
    public:
        FlightCrew(int id, int years, int totalSalary){
            this->id=id;
            this->years=years;
            this->totalSalary=totalSalary;
            cout<<"Flight ID is : "<<id<<endl;
            cout<<"Total number of years are : "<<years<<endl;
            cout<<"Total salary is : "<<totalSalary<<endl;
        }
};
class Pilot : public FlightCrew {
    protected:
        int hours;
        bool experience;
    public:
        Pilot(int hours, bool experience, int id, int years, int totalSalary):FlightCrew(id, years, totalSalary){
            this->hours=hours;
            this->experience=experience;
            cout<<"Total number of working hours are : "<<hours<<endl;
            if(experience==true){
                cout<<"Pilot have already experience.\n";
            }
            else {
                cout<<"Pilot have not already experience.\n";
            }
        }
        void bonus(){
            if(hours>=8){
                totalSalary+=(totalSalary*10)/100;
                cout<<"You won bonus and your new salary is : "<<totalSalary<<endl;
            }
            else{
                cout<<"You couldn't won bonus."<<endl;
            }
        }
        void isEligible(){
            if(hours > 100 & years > 5){
                cout<<"Pilot is eligible for promotion.\n";
            }
            else{
                cout<<"Pilot is not eligible for promotion.\n";
            }
        }
};
class CabinCrew : public FlightCrew  {
    protected:
        int training, served;
    public:
        CabinCrew(int training, int served, int id, int years, int totalSalary):FlightCrew(id, years, totalSalary){
            this->training=training;
            this->served=served;
            cout<<"Pilot taken number of trainings are : "<<training<<endl;
            cout<<"Pilot served in number of flights are : "<<served<<endl;
        }
        bool isEligible(){
            if(training >= 5 & served >=10){
                return true;
            }
            else{
                return false;
            }
        }
        void bonus(){
            if(isEligible()){
                totalSalary+=(totalSalary*5)/100;
                cout<<"You won bonus and your new salary is : "<<totalSalary<<endl;
            }
            else{
                cout<<"You couldn't won bonus."<<endl;
            }
        }
};
int main(){
    FlightCrew flightInfo(1234, 3, 100000);
    Pilot pilotInfo(8, true, 1234, 3, 100000);
    pilotInfo.bonus();
    pilotInfo.isEligible();
    CabinCrew cabin(12, 25, 1234, 3, 100000);
    cabin.isEligible();
    cabin.bonus();
    return 0;
}