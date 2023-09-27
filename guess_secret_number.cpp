#include<bits/stdc++.h>
using namespace std;
int scrtNum,draw=0;
char turn='X';
string p1, p2;
void playerTurn(){
    int choice;
    if(turn=='X'){
		cout<<p1<<"'s turn : \n";	
        turn='O';
	}
	else if(turn=='O'){
		cout<<p2<<"'s turn : \n";	
        turn='X';
	}
    cout<<"Enter your number : ";
    cin>>choice;
    draw++;
    if(choice==scrtNum & turn=='O'){
        cout<<p1<<" wins!Congratulation\n";
    }
    else if(choice==scrtNum & turn=='X'){
        cout<<p2<<" wins!Congratulation\n";
    }
    else if(draw == 10){
        cout<<"Both player can't find screat number.So,Computer wins!\n";
    }
    else{
        playerTurn();
    }
}

void PlayerName(string pl1, string pl2){
    cout<<"Enter the name of player1 : ";
	getline(cin,p1);
	cout<<"Enter the name of player2 : ";
	getline(cin,p2);
    cout<<p1<<" is player1 so he/she will play first.\n";
	cout<<p2<<" is player2 so he/she will play second.\n";
}

void generateSecreatNum(int scrtNum){
    srand(time(0));
    scrtNum=rand()%10;
}

int main(){
    
    PlayerName(p1, p2);
	generateSecreatNum(scrtNum);
    playerTurn();
    return 0;
}