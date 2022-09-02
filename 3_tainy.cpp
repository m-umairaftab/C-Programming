#include<bits/stdc++.h>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string p1,p2;
char turn='X';
int row,col,choice;
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
    //int choice;
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
        }
    }
    if(turn=='X' && (choice > 9 || choice < 1)){
        playerTurn();
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
    else if((turn=='X' || turn=='O') && (board[row][col]=='X' || board[row][col]=='O')){
        cout<<"Box is alredy filled.\n";
        playerTurn();
    }
}

void playerMove(){
    int move,choose,initialRow,initialCol,destinationRow,destinationCol;
    if(turn=='X'){
        cout<<p1<<"'s turn[X] : \n";	
    }
    else if(turn=='O'){
        cout<<p2<<"'s turn[O] : \n";	
    }
    cout<<"Which one do you want to move : ";
    cin>>choose;
    cout<<"Where are you move : ";
    cin>>move;
    switch(choose){
        case 1: {
            initialRow=0;
            initialCol=0;
            break;
        }
        case 2: {
            initialRow=0;
            initialCol=1;
            break;
        }
        case 3: {
            initialRow=0;
            initialCol=2;
            break;
        }
        case 4: {
            initialRow=1;
            initialCol=0;
            break;
        }
        case 5: {
            initialRow=1;
            initialCol=1;
            break;
        }
        case 6: {
            initialRow=1;
            initialCol=2;
            break;
        }
        case 7: {
            initialRow=2;
            initialCol=0;
            break;
        }
        case 8: {
            initialRow=2;
            initialCol=1;
            break;
        }
        case 9: {
            initialRow=2;
            initialCol=2;
            break;
        }
        default: {
            cout<<"Invalid choice.\n";
            break;
        }
    }
    switch(move){
        case 1: {
            destinationRow=0;
            destinationCol=0;
            break;
        }
        case 2: {
            destinationRow=0;
            destinationCol=1;
            break;
        }
        case 3: {
            destinationRow=0;
            destinationCol=2;
            break;
        }
        case 4: {
            destinationRow=1;
            destinationCol=0;
            break;
        }
        case 5: {
            destinationRow=1;
            destinationCol=1;
            break;
        }
        case 6: {
            destinationRow=1;
            destinationCol=2;
            break;
        }
        case 7: {
            destinationRow=2;
            destinationCol=0;
            break;
        }
        case 8: {
            destinationRow=2;
            destinationCol=1;
            break;
        }
        case 9: {
            destinationRow=2;
            destinationCol=2;
            break;
        }
        default: {
            cout<<"Invalid choice.\n";
            break;
        }
    }
    if(turn=='X' && board[initialRow][initialCol]=='O'){
        cout<<"You cannot move because it's "<<p2<<" token";
    }
    else if(turn=='O' && board[initialRow][initialCol]=='X'){
        cout<<"You cannot move because it's "<<p1<<" token";
    }
    else if(turn=='X' && board[initialRow][initialCol]=='X'){
        if(choose==1){
            if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==2){
            if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==3){
            if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==4){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==5){
            if(board[initialRow-1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==6){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==7){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==8){
            if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==9){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='O';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
    }
    else if(turn=='O' && board[initialRow][initialCol]=='O'){
        if(choose==1){
            if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==2){
            if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==3){
            if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==4){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==5){
            if(board[initialRow-1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==6){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow+1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==7){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==8){
            if(board[initialRow][initialCol+1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
        else if(choose==9){
            if(board[initialRow-1][initialCol] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else if(board[initialRow-1][initialCol-1] == board[destinationRow][destinationCol]){
                if(board[destinationRow][destinationCol] !='X' && board[destinationRow][destinationCol] !='O'){
                    int temp=board[initialRow][initialCol];
                    board[initialRow][initialCol]=board[destinationRow][destinationCol];
                    board[destinationRow][destinationCol]=temp;
                    turn='X';
                }
                else{
                    cout<<"You cannot move because box is already filled.\n";
                }
            }
            else{
                cout<<"You cannot move on this place.\n";
            }
        }
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
	return true;
}

int main(){
    cout<<"Enter the name of player1 : ";
	getline(cin,p1);
	cout<<"Enter the name of player2 : ";
	getline(cin,p2);
	cout<<p1<<" is player1 so he/she will play first.\n";
	cout<<p2<<" is player2 so he/she will play second.\n";
    displayBoard();
    for(int i=0; i<6; i++){
        playerTurn();
        displayBoard();
    }
    while (gameOver())
    {
        playerMove();
        displayBoard();
    }
    if(turn=='O'){
		cout<<p1<<" wins! congratulation\n";
	}
	else if(turn=='X'){
		cout<<p2<<" wins! congratulation\n";
	}
    return 0;
}