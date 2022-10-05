
#include<bits/stdc++.h>
using namespace std;
class Student{
    protected:
      string studentName, degree;
      int dateOfBirth;
    public:
        void studentInfo(){
            cout<<"Enter the name of studet : ";
            getline(cin, studentName);
            cout<<"Enter the degree of student : ";
            getline(cin, degree);
            cout<<"Enter the year in which born : ";
            cin>>dateOfBirth;
        }
};
class ExaminationSystem : public Student {
    protected:
        float cgpa, marks;
    public:
        void examSystem(){
            int commingFrom;
            cout<<"Enter your examination system (1 for annual and 0 for semester): ";
            cin>>commingFrom;
            if(commingFrom==1){
                cout<<"Enter the percentage marks that are obtained in annual exam : ";
                cin>>marks;
                if(marks >= 60 & dateOfBirth >= 1980){
                    cout<<"Student is eligible for admission.\n";
                }
                else{
                    cout<<"Student is not eligible for admission.\n";
                }
            }
            else if(commingFrom==0){
                cout<<"Enter the cumulative grade point average (CGPA) : ";
                cin>>cgpa;
                if(cgpa >= 3.0){
                    cout<<"Student is eligible for admission.\n";
                }
                else{
                    cout<<"Student is not eligible for admission.\n";
                }
            }
            else{
                cout<<"Enter the correct input.\n";
                examSystem();
            }
        }
};
int main(){
    ExaminationSystem system;
    
    system.studentInfo();
   
    system.examSystem();
    return 0;
}