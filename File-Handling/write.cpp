#include<iostream>
#include<fstream>
using namespace std;
int main() {
    // string st = 'Aftab Javed';
    fstream write("test.txt");
    write << "MY father name is aftab javed";
    return 0;
}