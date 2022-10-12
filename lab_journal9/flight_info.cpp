#include<bits/stdc++.h>
using namespace std;
class Date {
    public:
        int day, month, year;
        void setDate(){
            
            cin>>day;
            
            cin>>month;
            
            cin>>year;
            
        }
        void displayDate(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
class Time {
    public:
        int hours, minutes, seconds;
        void setTime(){
            cin>>hours;
            
            cin>>minutes;
            
            cin>>seconds;
        }
        void displayTime(){
            cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
};
class Flight{
    protected:
        Time departureTime;
        Date departureDate;
        Time arrivalTime;
        Date arrivalDate;
        string origin;
        string destination;
    public:
        virtual void input()=0;
        virtual void display()=0;
};
class domesticFlight : public Flight {
    protected:
        float baggageLimit;
    public:
        void input(){
            cout << " Enter the baggage limit of domestic flight : ";
            cin >> baggageLimit;
            cout<<"Enter the date of deperaturing : ";
            departureDate.setDate();
            cout<<"Enter the time of deperaturing : ";
            departureTime.setTime();
            cout << " Enter the origin of domestic flight : ";
            cin>>origin;
            cout<<"Enter the date of arriving : ";
            arrivalDate.setDate();
            cout<<"Enter the time of arriving : ";
            arrivalTime.setTime();
            cout << " Enter the destination of domestic flight : ";
            cin>>destination;
        }
        void display(){
            cout<<"Baggage Limit of domestic flight is:\t" << baggageLimit<<"kg" << endl;
            cout << "Departure date of domestic flight is:\t";
            departureDate.displayDate();
            cout << "Departure time of domestic flight is:\t";
            departureTime.displayTime();
            cout << "Origing of domestic flight is:\t" << origin << endl;
            cout << "Arrival date of domestic flight is:\t";
            arrivalDate.displayDate();
            cout << "Arrival time of domestic flight is:\t";
            arrivalTime.displayTime();
            cout << "Destination of domestic flight is:\t" << destination << endl;
        }
};
class InternationalFlight : public Flight {
    protected:
        int direct;
    public:
        void input(){
            cout << "flight is direct?(1 for True and 0 for False) : ";
	        cin >> direct;
            cout<<"Enter the date of deperaturing : ";
            departureDate.setDate();
            cout<<"Enter the time of deperaturing : ";
            departureTime.setTime();
            cout << " Enter the origin of international flight : ";
            cin>>origin;
            cout<<"Enter the date of arriving : ";
            arrivalDate.setDate();
            cout<<"Enter the time of arriving : ";
            arrivalTime.setTime();
            cout << " Enter the destination of international flight : ";
            cin>>destination;
        }
        void display(){
            if (direct == 1)
            {
                cout << "Flight is direct\n";
            }
            else
            {
                cout << "Flight is not direct\n";
            }
            cout << "Departure date of international flight is:\t";
            departureDate.displayDate();
            cout << "Departure time of international flight is:\t";
            departureTime.displayTime();
            cout << "Origing of international flight is:\t" << origin << endl;
            cout << "Arrival date of international flight is:\t";
            arrivalDate.displayDate();
            cout << "Arrival time of international flight is:\t";
            arrivalTime.displayTime();
            cout << "Destination of international flight is:\t" << destination << endl;
        }
};
int main(){
    Flight *ptr[5];
    for(int i=0; i<5; i++){
        int select;
        cout<<"Enter 1 for international and anyother number for domestic : ";
        cin>>select;
        if(select==1){
            ptr[i]=new InternationalFlight;
            ptr[i]->input();
            ptr[i]->display();
        }
        else{
            ptr[i]=new domesticFlight;
            ptr[i]->input();
            ptr[i]->display();
        }
    }
    return 0;
}