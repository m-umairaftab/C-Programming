#include<bits/stdc++.h>
using namespace std;
void calculation(int, int, int, float);
void askQns(int difficultyLevel, int numOfQns){
    float num1, num2, result, input, correctAns=0.0, wrongAns=0.0, totalQns;
    int qnsNum=1;
    cout<<"You choose difficulty level "<<difficultyLevel<<" : \n";
    int randNumDigits = 0;
    if(difficultyLevel==1){
    randNumDigits = 10;
    } else if(difficultyLevel==2){
    randNumDigits = 100;

    } else if(difficultyLevel==3){
    randNumDigits = 1000;

    }
    for(int i=0; i<numOfQns; i++){
        num1=rand()%randNumDigits;
        num2=rand()%randNumDigits;
        char opr = "+-*"[rand() % 3];
        cout<<"Q"<<qnsNum<<") "<<num1<<opr<<num2<<" ? ";
        qnsNum++;
        switch (opr)
        {
        case '+':

            result = num1+num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '-':
            result = num1-num2;
            break;
        
        default:
            break;
        }
        cin>>input;
        if(input==result){
            cout<<"Correct answer.\n";
            correctAns++;
            totalQns++;
        }
        else{
            cout<<"Wrong answer.\n";
            wrongAns++;
            totalQns++;

        }
    }
    calculation(numOfQns,correctAns,wrongAns,totalQns);
}

void calculation(int numOfQns, int correctAns, int wrongAns,float totalQns){
    cout<<"Total number of questions is "<<totalQns<<endl;
    cout<<"Your correct answer is "<<correctAns<<endl;
    cout<<"Your wrong answer is "<<wrongAns<<endl;
    float percentage=(correctAns/totalQns)*100;
    cout<<"Your percentage of correct answer is "<<percentage<<"%"<<endl;
}

void chooseLevel(int numOfQns){
    int level;
    cout<<"Level 1 for easy!\n";
    cout<<"Level 2 for medium!\n";
    cout<<"Level 3 for hard!\n";
    cout<<"Choose your difficulty level : ";
    cin>>level;
    if(level > 3 | level < 1){
        cout<<"Invalid Input!\n";
        chooseLevel(numOfQns);
    }
    askQns(level,numOfQns );
}


int main(){
    srand(time(0));
    int numOfQns;
    cout<<"how much question would you like to answer : ";
    cin>>numOfQns;
    chooseLevel(numOfQns);
    return 0;
}