#include<bits/stdc++.h>
using namespace std;
const int num=3;
struct Movies{
    string title;
    int year;
};
int main(){
    Movies amovie;
    Movies *pmovie;
    pmovie=&amovie;
    cout<<"Enter title : ";
    cin>>pmovie->title;
    cout<<"ENter year : ";
    cin>>pmovie->year;
    cout<<"\nYou have entered : \n";
    cout<<pmovie->title<<endl;
    cout<<pmovie->year<<endl; 
  return 0; 
} 
