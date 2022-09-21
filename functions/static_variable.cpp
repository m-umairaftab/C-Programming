#include<bits/stdc++.h>
using namespace std;
float getavg(float newdata)
{
    static float total = 0;             //static variables are initialized
    static int count = 0;               //only once per program
    count++;                            //increment count
    total += newdata;                   //add new data to total
    return total / count;               //return the new averag
}
int main(){
    float data=1, avg;
    while( data != 0 ){
        cout << "Enter a number: ";
        cin >> data;
        avg = getavg(data);
        cout << "New average is  "<< avg << endl;
    }
    return 0;
}