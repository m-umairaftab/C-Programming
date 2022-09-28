#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hour;
    int min;
 public:
    Time(){}
    Time(int a, int b){
        hour=a;
        min=b;
    }
    Time operator++ (int){
        if (min>=59){
            min=00;
            return Time (hour++, min);
        }
        else{
            return Time (hour,min++);
        }
    }
    Time operator++ (){
        return Time (hour,++min);
    }
    int display (){
        if (min>=59){
            cout<<"hour:"<<hour++<<"\n";
            cout<<"minutes:"<<min<<endl;
        }
        else{
            cout<<"\t\n\n***TIME***\t\n\n"<<"Hours: "<<hour<<endl<<"Minutes: "<<min<<"\n=========================\n\n";
        }
        return 0;
    }
};
int main()
{
    Time t1(10,30);
    Time t2(11,59);
    Time t3;
    Time t4;
    ++t1;         //t3=++t1
    t2++;         //t4=t2++
    t1.display();
    t2.display();
    return 0;

}