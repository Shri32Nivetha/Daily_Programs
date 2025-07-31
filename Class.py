# Default Constructor Class

class Batsman:
    def __init__(self):
        self.name="Joe Root"
        self.score=100

player=Batsman()
print("The name of the player is : ",player.name)
print("The score of the player is : ",player.score)

# Parameterized Constructor Class

class Batsman:
    def __init__(self,name,age,runs):
        self.name=name
        self.age=age
        self.runs=runs
    
player = Batsman("Joe Root",33,100)
print(player.name)
print(player.age)
print(player.runs)

player.runs=200
print(player.runs)

#Destructor

class Batsman:
    def __init__(self,n,a,r):
        self.name=n
        self.age=a
        self.runs=r
    def __del__(self):
        print("Object Deleted")

player=Batsman("Joe Root",33,100)
print(player.name)
print(player.age)
print(player.runs)

del player
print(player.name)

try:
    print(player.name)
except:
    print("Error")

# Print Formatting

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







