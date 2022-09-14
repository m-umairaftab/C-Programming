#include<bits/stdc++.h>
using namespace std;
class Student{
    string Name;
    int age;
 public:
    void setName(string Name){
        this->Name=Name;
    }
    void setage(int age){
        this->age=age;
    }
    string getName(){
        return Name;
    }
    int getage(){
        return age;
    }
};
int main(){
    Student s1;
    s1.setName("Umair Aftab");
    cout<<s1.getName()<<endl;
    s1.setage(18);
    cout<<s1.getage()<<endl;
    return 0;
}