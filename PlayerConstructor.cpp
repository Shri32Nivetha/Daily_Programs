#include <iostream>
#include <string>
using namespace std;

class Player{
    private:
    string name;
    int age;
    int runs;
    public:
    Player(string name,int age,int runs){
        this->name=name;
        this->age=age;
        this->runs=runs;
    }
    void Display(){
        cout<<"The name of the player is "<<name<<endl;
        cout<<"The age of the player is "<<age<<endl;
        cout<<"The runs scored by the player is "<<runs<<endl;
        
    }
};

int main(){
    Player Player1("Root",32,200);
    Player1.Display();
    string ab;
    int c;
    int d;
    getline(cin,ab);
    cin>>c;
    cin>>d;
    Player Player2(ab,c,d);
    Player2.Display();   
}