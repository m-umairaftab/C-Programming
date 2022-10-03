#include<bits/stdc++.h>
using namespace std;
class Player {
    protected: 
        string firstName, lastName, nationality;
        int numberOfMatches;
    public:
        Player(string firstName, string lastName, int numberOfMatches, string nationality){
            this->firstName=firstName;
            this->lastName=lastName;
            this->numberOfMatches=numberOfMatches;
            this->nationality=nationality;
        }
};
class SoccerPlayer :public Player{
    protected:
        int numberOfGoals, poistion, avgOfGoals;
    public:
        SoccerPlayer(int numberOfGoals, int poistion, string firstName, string lastName, int numberOfMatches, string nationality):Player(firstName, lastName, numberOfMatches, nationality){
            this->numberOfGoals=numberOfGoals;
            this->poistion=poistion;
            avgOfGoals=(float)numberOfGoals/numberOfMatches*100;
            cout<<"Average number of goals is : "<<avgOfGoals<<endl;
            cout<<"Player's position is : "<<poistion<<endl;
            cout<<"---------------------------------------------"<<endl;
        }
};
class CricketPlayer :public Player {
    protected: 
        int numberOfRuns, numberOfWickets, numberOfCatches, avgRuns, avgWickets;
    public:
        CricketPlayer(int numberOfRuns, int numberOfWickets, int numberOfCatches, string firstName, string lastName, int numberOfMatches, string nationality):Player(firstName, lastName, numberOfMatches, nationality){
            this->numberOfRuns=numberOfRuns;
            this->numberOfWickets=numberOfWickets;
            this->numberOfCatches=numberOfCatches;
            avgRuns=(float)numberOfRuns/numberOfMatches*100;
            avgWickets=(float)numberOfWickets/numberOfMatches*100;
            cout<<"Average number of runs is : "<<avgRuns<<endl;
            cout<<"Average number of wickets is : "<<avgWickets<<endl;
        }
};
class Batsmen :public CricketPlayer {
    protected:
        int ballFaced, numberOfHundreds, numberOfFiftys;
    public:
        Batsmen(int ballFaced, int numberOfHundreds, int numberOfFiftys, int numberOfRuns, int numberOfWickets, int numberOfCatches, string firstName, string lastName, int numberOfMatches, string nationality):CricketPlayer(numberOfRuns, numberOfWickets, numberOfCatches, firstName, lastName, numberOfMatches, nationality){
            this->ballFaced=ballFaced;
            this->numberOfHundreds=numberOfHundreds;
            this->numberOfFiftys=numberOfFiftys;
            cout<<"Number of hundreds(100) is : "<<numberOfHundreds<<endl;
            cout<<"Number of fiftys(50) is : "<<numberOfFiftys<<endl;
        }
};
class Bowler :public CricketPlayer{
    protected:
        int ballBowled, runsConceded;
    public:
        Bowler(int ballBowled, int runsConceded, int ballFaced, int numberOfHundreds, int numberOfFiftys, int numberOfRuns, int numberOfWickets, int numberOfCatches, string firstName, string lastName, int numberOfMatches, string nationality):CricketPlayer(numberOfRuns, numberOfWickets, numberOfCatches, firstName, lastName, numberOfMatches, nationality){
            this->ballBowled=ballBowled;
            this->runsConceded=runsConceded;
            cout<<"Bowler  bowled the number of balls : "<<ballBowled<<endl;
            cout<<"Bowler conceded the number of runs : "<<runsConceded<<endl;
        }
};
int main(){
    Player intro("Umair", "Aftab", 200, "Pakistani");
    SoccerPlayer soccer(100, 2, "Umair", "Aftab", 200, "Pakistani");
    CricketPlayer cricket(45, 3, 2, "Umair", "Aftab", 200, "Pakistani");
    Batsmen batsmen(300, 3, 8, 45, 3, 2, "Umair", "Aftab", 200, "Pakistani");
    Bowler bowler(300, 350, 300, 3, 8, 45, 3, 2, "Umair", "Aftab", 200, "Pakistani");
    return 0;
}