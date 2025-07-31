import threading

def One():
    for i in range(10):
        print("One")

def Two():
    for i in range (10):
        print("Two")

t1=threading.Thread(target=One)
t2=threading.Thread(target=Two)
t1.start()
t2.start()