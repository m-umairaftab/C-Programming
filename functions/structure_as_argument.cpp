#include<bits/stdc++.h>
using namespace std;
struct Distance{                                                        //English distance
    int feet;
    float inches;
};
void engldisp( Distance dd ){  
    cout<<dd.feet << "\'-" << dd.inches <<"\"";                         //parameter dd of type Distance
}
int main(){
    Distance d1, d2;                                                    //define two lengths
    cout << "Enter feet: ";
    cin >> d1.feet;                                                     //get length d1 from user
    cout << "Enter inches: "; 
    cin >> d1.inches;
    cout << "\nEnter feet: ";
    cin >> d2.feet;                                                     //get length d2 from user
    cout << "\nEnter inches: ";
    cin >> d2.inches;                                                   //get length d2 from user
    cout << "\nd1 = ";
    engldisp(d1);                                                       //display length 1
    cout << "\nd2 = ";
    engldisp(d2);                                                       //display length 2
    cout << endl;
    return 0;
}