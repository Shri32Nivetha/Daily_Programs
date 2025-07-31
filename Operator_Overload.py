class Vector:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    
    def __add__(self,other):
        return Vector(self.x + other.x ,self.y + other.y)
    
    def __mul__(self,other):
        return Vector(self.x * other.x ,self.y * other.y)
    
    def __str__(self):
        return "X:{}\nY:{}".format(self.x,self.y)

def main():
    v1=Vector(6,3)
    v2=Vector(2,7)
    v3=v1+v2
    print(v1)
    print(v2)
    print(v3)
    
main()