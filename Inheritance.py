class Player:
    def __init__(self,name,age,height):
        self.name=name
        self.age=age
        self.height=height
    
    def __str__(self):
        return "Name of Player:{}\nAge of Player:{}\nHeight of Player:{}\n".format(self.name,self.age,self.height)
    
class Batsman(Player):
    def __init__(self,name,age,height,runs,balls):
        super().__init__(name,age,height)
        self.runs=runs
        self.balls=balls
    
    def Strike(self):
        self.strike=(self.runs/self.balls)*100
    
    def __str__(self):
        text=super().__str__()
        text= text+ "Runs scored:{}\nBalls faced:{}\nStrike Rate:{}".format(self.runs,self.balls,self.strike)
        return text

class Bowler(Player):
    def __init__(self,name,age,height,runs,overs,wickets):
        super().__init__(name,age,height)
        self.runs=runs
        self.wickets=wickets 
        self.overs=overs
    
    def Bowling_Average(self):
        self.average=self.runs/self.wickets
    
    def Economy(self):
        self.economy=self.runs/self.overs

    def __str__(self):
        text=super().__str__()
        text= text + "Runs conceede={}\nWickets Taken={}\nBowling Average={}\nEconomy:{}".format(self.runs,self.wickets,self.average,self.economy)
        return text

def main():
    choice=1
    while choice==1:
        ch=int(input("Enter the status of the player\n1.Batsman\n2.Bowler"))
        name=input("Name of Player: ")
        age=int(input("Age of Player: "))
        height=int(input('Height of Player: '))
        if ch==1:
            runs=int(input("Runs Scored: "))
            balls=int(input("Balls Played: "))
            batter=Batsman(name,age,height,runs,balls)
            batter.Strike()
            print(batter)
            choice=int(input("Would you like to continue?\n1.Yes\n2.No"))
        if ch==2:
            runs=int(input("Runs Conceeded: "))
            overs=int(input("Overs Bowled: "))
            wickets=int(input("Wickets Taken: "))
            bowl=Bowler(name,age,height,runs,overs,wickets)
            bowl.Bowling_Average()
            bowl.Economy()
            print(bowl)
            choice=int(input("Would you like to continue?\n1.Yes\n2.No"))
    else:
        print("See You Again!!")
main()
