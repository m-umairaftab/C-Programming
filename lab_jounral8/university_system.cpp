#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string studentName, degree;
        int dateOfBirth;
        float cgpa, marks;
        void studentInfo(){
            cout<<"Enter the name of studet : ";
            getline(cin, studentName);
            cout<<"Enter the degree of student : ";
            getline(cin, degree);
            cout<<"Enter the year in which born : ";
            cin>>dateOfBirth;
        }
        void examinationSystem(){
            int commingFrom;
            cout<<"Enter your examination system (1 for annual and 0 for semester): ";
            cin>>commingFrom;
            if(commingFrom==1){
                cout<<"Enter the percentage marks that are obtained in annual exam : ";
                cin>>marks;
               isEligibleMarks(marks, dateOfBirth);
            }
            else if(commingFrom==0){
                cout<<"Enter the cumulative grade point average (CGPA) : ";
                cin>>cgpa;
                isEligibleCgpa(cgpa);
            }
            else{
                cout<<"Enter the correct input.\n";
                examinationSystem();
            }
        }
        void isEligibleMarks(float marks, int dateOfBirth){
            if(marks >= 60 & dateOfBirth >= 1980){
                cout<<"Student is eligible for admission.\n";
            }
            else{
                cout<<"Student is not eligible for admission.\n";
            }
        }
        void isEligibleCgpa(float cgpa){
            if(cgpa >= 3.0){
                cout<<"Student is eligible for admission.\n";
            }
            else{
                cout<<"Student is not eligible for admission.\n";
            }
        }
};
int main(){
    Student detail;
    detail.studentInfo();
    detail.examinationSystem();
    //detail.isEligible();
    return 0;
}