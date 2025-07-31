#include <iostream>
using namespace std;

 class Scorecard{
    public:
    float Economy;
    float Strike;
    void Print(){
      cout<<"The Ashes need a sacrifice,Who will burn!"<<endl;
    }
 };
 
 class Bowler: public Scorecard{
    public:
    int runs;
    int overs;
    int wickets;
    Bowler(int runs,int overs,int wickets){
        this->runs=runs;
        this->overs=overs;
        this->wickets=wickets;
        Economy=runs/overs;
    }
    void Display(){
        cout<<"The Bowling Figure of the Bowler is "<<endl;
        cout<<runs<<"-"<<overs<<"-"<<wickets<<endl;
    }
    
 };

 class Batsman:public Scorecard{
    public:
    int Runs;
    int Balls;
    Batsman(int Runs,int Balls){
        this->Runs=Runs;
        this->Balls=Balls;
        Strike=(Runs/Balls)*100;
    }

 };
 int main(){
   int a,b,c;
   cout<<"Enter Runs conceeded by Bowler"<<endl;
   cin>>a;
   cout<<"Enter the number of overs bowled"<<endl;
   cin>>b;
   cout<<"Enter the number of Wickets taken"<<endl;
   cin>>c;
   Bowler Player1(a,b,c);
   Player1.Print();
   Player1.Display();
   cout<<"The Average of the Bowler is "<<endl;
   cout<<Player1.Economy<<endl;
   int x,y;
   cout<<"Enter Runs scored by Batsman"<<endl;
   cin>>x;
   cout<<"Enter the number of balls played"<<endl;
   cin>>y;
    Batsman Player2(x,y);
    cout<<"The Strike rate of the Batsman is "<<endl;
    cout<<Player2.Strike<<endl;
 }