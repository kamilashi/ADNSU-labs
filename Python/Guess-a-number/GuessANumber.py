import random
a = random.randint(1,50)
print("a is an integer number in range (1 , 50).")
print("Try to guess it!")
print("")
print("Enter your guess:")
x=101
count = 0
while (x!=a):
    count=count+1
    x = int(input())
    if(x<a):
        print("a is bigger!")
    if(x>a):
        print("a is smaller!")
print("you guessed it! took you", count ,"tries")
