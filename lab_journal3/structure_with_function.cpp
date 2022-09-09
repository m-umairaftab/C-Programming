#include<bits/stdc++.h>
using namespace std;
struct Movies{
    string title;
    int year;
};
void printMovie(Movies movie){
    cout<<movie.title<<endl;
    cout<<movie.year;
}
int main(){
    Movies mine, your;
    mine.title="2001 a space odyssey";
    mine.year=1968;
    cout<<"Enter title : ";
    cin>>your.title;
    cout<<"Enter year : ";
    cin>>your.year;
    cout<<"My favourite movie is : \n";
    printMovie(mine);
    cout<<"Your favourite movie is: ";
    printMovie(your);
    return 0;
}