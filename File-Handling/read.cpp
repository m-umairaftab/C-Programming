#include<iostream>
#include<fstream>
using namespace std;
int main() {
    string st;
    ifstream read("test.txt");
    getline(read, st);
    cout<<st;
    return 0;
}