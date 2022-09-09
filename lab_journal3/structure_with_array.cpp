#include<bits/stdc++.h>
using namespace std;
const int num=3;
struct Movies{
    string title;
    int year;
};
void printMovie(Movies movie){
    cout<<movie.title<<endl;
    cout<<movie.year;
}
int main(){
    Movies film[num];
    for (int n=0; n<num; n++) 
  { 
    cout << "Enter title: "; 
    cin >> film[n].title; 
    cout << "Enter year: "; 
    cin >> film[n].year; 
   } 
 
  cout << "\nYou have entered these movies:"; 
  for (int n=0; n<num; n++) 
    printMovie(film[n]); 
  return 0; 
} 
