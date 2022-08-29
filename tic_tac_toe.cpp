#include<bits/stdc++.h>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string p1,p2;
char turn='X';
int row,col;
bool draw=false;

void displayBoard(){
	cout<<"\t\t\t\t"<<"___________________\n";
	cout<<"\t\t\t\t"<<"|     |     |     |\n";
	cout<<"\t\t\t\t"<<"|  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  |  "<<endl;
	cout<<"\t\t\t\t"<<"|_____|_____|_____|\n";
	cout<<"\t\t\t\t"<<"|     |     |     |\n";
	cout<<"\t\t\t\t"<<"|  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  |  "<<endl;
	cout<<"\t\t\t\t"<<"|_____|_____|_____|\n";
	cout<<"\t\t\t\t"<<"|     |     |     |\n";
	cout<<"\t\t\t\t"<<"|  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  |  "<<endl;
	cout<<"\t\t\t\t"<<"|_____|_____|_____|\n";
}

void playerTurn(){
	int choice;
	if(turn=='X'){
		cout<<p1<<"'s turn[X] : ";	
	}
	else if(turn=='O'){
		cout<<p2<<"'s turn[O] : ";	
	}
	cin>>choice;
	switch(choice){
		case 1: {
			row=0;
			col=0;
			break;
		}
		case 2: {
			row=0;
			col=1;
			break;
		}
		case 3: {
			row=0;
			col=2;
			break;
		}
		case 4: {
			row=1;
			col=0;
			break;
		}
		case 5: {
			row=1;
			col=1;
			break;
		}
		case 6: {
			row=1;
			col=2;
			break;
		}
		case 7: {
			row=2;
			col=0;
			break;
		}
		case 8: {
			row=2;
			col=1;
			break;
		}
		case 9: {
			row=2;
			col=2;
			break;
		}
		default: {
			cout<<"Invalid choice.\n";
			break;
		}
	}
	if(turn=='X' && (choice > 9 || choice < 1)){
		cout<<endl;
	}
	else if(turn=='X' && board[row][col]!='X' && board[row][col]!='O'){
		board[row][col]='X';
		turn='O';	
	}
	else if(turn=='O' && board[row][col]!='X' && board[row][col]!='O'){
		board[row][col]='O';
		turn='X';	
	}
	else if(choice<10 && (turn=='X' || turn=='O') && (board[row][col]=='X' || board[row][col]=='O')){
		cout<<"Box is alredy filled.\n";
		playerTurn();
	}
}

bool gameOver(){
	for(int i=0; i<3; i++){
		if((board[i][0]==board[i][1] && board[i][0]==board[i][2]) || (board[0][i]==board[1][i] && board[0][i]==board[2][i])){
			return false;
		}
	}
	if((board[0][0]==board[1][1] && board[0][0]==board[2][2]) || (board[0][2]==board[1][1] && board[0][2]==board[2][0])){
		return false;
	}
	for(int i=0; i<3; i++){
		for(int j =0; j<3; j++){
			if(board[i][j] !='X' && board[i][j] !='O'){
				return true;
			}
		}
	}
	draw=true;
	return false;
}

int main(){
	cout<<"Enter the name of player1 : ";
	getline(cin,p1);
	cout<<"Enter the name of player2 : ";
	getline(cin,p2);
	cout<<p1<<" is player1 so he/she will play first.\n";
	cout<<p2<<" is player2 so he/she will play second.\n";
    displayBoard();
	while(gameOver()){
		playerTurn();
        displayBoard();
	}
	if(turn=='O' && draw==false){
		cout<<p1<<" wins! congratulation\n";
	}
	else if(turn=='X' && draw==false){
		cout<<p2<<" wins! congratulation\n";
	}
	else{
		cout<<"Game Draw!!\n";
	}
	return 0;
}