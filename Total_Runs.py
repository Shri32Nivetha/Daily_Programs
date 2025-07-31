class Player:
    def __init__(self,runs):
        self.runs=runs
    def __add__(self,other):
        return Player(self.runs+other.runs)
    def __str__(self):
        return "Runs:{}".format(self.runs)

def main():
    batter1=Player(100)
    batter2=Player(100)
    partnership=batter1+batter2
    print(partnership)

main()
