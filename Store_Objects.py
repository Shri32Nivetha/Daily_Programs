class Batsman:
    all=[]
    def __init__(self,name,runs,balls):
        self.name=name
        self.runs=runs
        self.balls=balls
        Batsman.all.append(self)
    
    def Strike(self):
        self.strike=(self.runs/self.balls)* 100
    
    def __repr__(self):
        return f"Batsman('{self.name}',{self.runs},{self.balls},{self.strike})"
    
batter1=Batsman("Joe Root",100,50)
batter2=Batsman("Ben Stokes",150,75)
batter1.Strike()
batter2.Strike()

for instance in Batsman.all:
    print(instance)

print(Batsman.all)