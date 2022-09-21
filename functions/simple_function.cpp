#include<bits/stdc++.h>
using namespace std;
void starline(){                        //function declarator
    for(int j=0; j<45; j++)             //function body
    cout<<"*";
    cout << endl;
}
int main(){
    starline();    
    cout<<"Data type     Range"<<endl;       //call to function
    starline();                        //call to function
    cout<<"char        -128 to 127"<<endl<<"short       -32,768 to 32,767"<<endl<<"int         System dependent"<<endl<<"long        -2,147,483,648 to 2,147,483,647"<<endl;
    starline();                        //call to function
    return 0;
}