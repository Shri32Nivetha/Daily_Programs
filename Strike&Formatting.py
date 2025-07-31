class Batsman:
    def __init__(self,name,age,runs,balls):
        self.name=name
        self.age=age
        self.runs=runs
        self.balls=balls

    def Strike(self):
        self.strike=(self.runs/self.balls)*100
    
    def __str__(self):
        return "Name of batsman:{}\nAge of Batsman:{}\nRuns of Batsman={}\nStrike:{}".format(self.name,self.age,self.runs,self.strike)
    
name=input("Enter name of player")
age=int(input("Enter age of player"))
runs=int(input("Enter runs scored"))
balls=int(input("Enter balls faced"))
    
player=Batsman(name,age,runs,balls)
player.Strike()
print(player)

#Method Parameter

class Batsman:
    all=[]
    def __init__(self,name,runs):
        self.name=name
        self.runs=runs
        Batsman.all.append(self)
    
    def Strike(self,balls):
        self.strike=(self.runs/balls)* 100
    
    def __str__(self):
        return "Name of batsman:{}\nAge of Batsman:{}\nRuns of Batsman={}\nStrike:{}".format(self.name,self.age,self.runs,self.strike)
        
batter1=Batsman("Joe Root",100)
batter1.Strike(50)
print(batter1)

batter2=Batsman("Ben Stokes",150)
batter2.Strike(70)
print(batter2)