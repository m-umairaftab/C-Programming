#include<bits/stdc++.h>
using namespace std;
void repChar(char ch, int n){                        //function declarator
    for(int j=0; j<n; j++)             //function body
    cout<<ch;
    cout << endl;
}
int main(){
    repChar('-', 45);    
    cout<<"Data type     Range"<<endl;       //call to function
    repChar('=', 25);                        //call to function
    cout<<"char        -128 to 127"<<endl<<"short       -32,768 to 32,767"<<endl<<"int         System dependent"<<endl<<"long        -2,147,483,648 to 2,147,483,647"<<endl;
    repChar('-', 45);                        //call to function
    return 0;
}