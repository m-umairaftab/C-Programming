#include<bits/stdc++.h>
using namespace std;
struct Time{
    int hours, minutes;
};
struct Flight{
    int flightId;
    Time arrivalTime, deperatureTime;
};
void input(Flight*);
void display(Flight*);
int main(){
    Flight data;
    input(&data);
    display(&data);
    return 0;
}
void input(Flight *inpt){
    cout<<"Enter the flight_id : ";
    cin>>inpt->flightId;
    cout<<"Enter the arrival time of flight in hours : ";
    cin>>inpt->arrivalTime.hours;
    cout<<"Enter the arrival time of flight in minutes : ";
    cin>>inpt->arrivalTime.minutes;
    cout<<"Enter the deperature time of flight in hours : ";
    cin>>inpt->deperatureTime.hours;
    cout<<"Enter the deperature time of flight in minutes : ";
    cin>>inpt->deperatureTime.minutes;
}
void display(Flight *output){
    cout<<"Your flight_id is "<<output->flightId<<endl;
    cout<<"Your flight's arrival time is "<<output->arrivalTime.hours<<":"<<output->arrivalTime.minutes<<endl;
    cout<<"Your flight's deperature time is "<<output->deperatureTime.hours<<":"<<output->deperatureTime.minutes<<endl;
}