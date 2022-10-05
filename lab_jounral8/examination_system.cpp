#include<bits/stdc++.h>
using namespace std;
class Date {
    public:
        int day, month, year;
    //public:
        void setDate(){
            cout<<"Enter the day : ";
            cin>>day;
            cout<<"Enter the month : ";
            cin>>month;
            cout<<"Enter the year : ";
            cin>>year;
            
        }
};
class Time : public Date {
    public:
        int hours, minutes, seconds,duration;
   // public:
        void setTime(){
            cout<<"Enter the hours : ";
            cin>>hours;
            cout<<"Enter the minutes : ";
            cin>>minutes;
            cout<<"Enter the seconds : ";
            cin>>seconds;
            cout<<"Enter the exam duration : ";
            cin>>duration;
        }
};
class Course : public Time {
    public:
        string courseName;
   // public:
        void examTitle(){
            cout<<"Enter the exam name (theory or practical): ";
            cin>>courseName;
            
        }
};
class Theory : public Course {
    public:
        string invigilator;
   // public:
    void theoryExam(){
        if(courseName=="theory"){
            cout<<"Enter the name of invigilator : ";
            cin>>invigilator;
            
        }
    }
};
class Lab : public Theory {
    public:
        int labNo;
    //public:
        void labExam(){
            if(courseName=="practical"){
                cout<<"Enter the lab number where practical conduct : ";
                cin>>labNo;
                
            }
        }
};
class Print : public Lab {
    public:
    void printDate(){
        if((day <= 30 & day > 0) & (month > 0 & month <= 12) & (year >= 22)){
            cout<<"Exam date is "<<day<<"/"<<month<<"/"<<year<<endl;
        }
        else{
            cout<<"You input wrong day or month or year.\n";
            setDate();
        }
    }
    void printTime(){
        if((hours <= 24 & hours > 0) & (minutes <= 60) & (seconds <= 60)){
            cout<<"Exam time is "<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
        else{
            cout<<"You input wrong hours or minutes or seconds.\n";
            setTime();
        }
        cout<<"Exam duration time is : "<<duration<<endl;
    }
    void printCourse(){
        if(courseName=="theory"){
            cout<<"Theory exam.\n";
        }
        else if(courseName=="practical"){
            cout<<"Practical exam.\n";
        }
        else{
            cout<<"You choose wrong input.\n";
            examTitle();
        }
    }
    void examConducted(){
        if((courseName=="theory")){
            cout<<"Invigilator name is : "<<invigilator<<endl;
            cout<<"Invigilator paid 20$ per hour and its total amount is : "<<20*duration<<"$"<<endl;
        }
        else if(courseName=="practical"){
            cout<<"Lab number where practical conducted is : "<<labNo<<endl;
            cout<<"Lab attendant paid 10$ per hour and its total amount is : "<<10*duration<<"$"<<endl;
        }
        
    }
};
int main(){
    Print exam;
    exam.setDate();
    exam.setTime();
    exam.examTitle();
    exam.theoryExam();
    exam.labExam();
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"-----------------------------------------------------------------------------\n";
    exam.printDate();
    exam.printTime();
    exam.printCourse();
    exam.examConducted();
    return 0;
}