#include<bits/stdc++.h>
using namespace std;
void repChar(char ch, int n){                        //function declarator
    for(int j=0; j<n; j++)                          //function body
    cout<<ch;
    cout << endl;
}
int main(){
    char chin;
    int nin;
    cout << "Enter a character: ";
    cin >> chin;
    cout << "Enter number of times to repeat it: ";
    cin >> nin;
    repChar(chin, nin);
    return 0;
}