print("This is a program that returns the count of fibonacci numbers in an arbitrary array.")
print("Enter the array size:")
k = int(input())
import math
Ar = [0]*k
count =0
print("Enter the array elements:")
Ar = list(map(float,input().split()))
c=1
ci=0
c2=1
c2i=0

for i in range (0,k):
    if(Ar[i]>1):
        c = math.sqrt(5*(Ar[i]*Ar[i])+4)
        c2 = math.sqrt(5*(Ar[i]*Ar[i])-4)
        #print(i,' ',c,'   ',c2)
        ci = round(math.sqrt(5*(Ar[i]*Ar[i])+4))
        c2i = round(math.sqrt(5*(Ar[i]*Ar[i])-4))
    if ((c == ci)|(Ar[i]==1)|(c2==c2i)):
        count+=1
    c=1
    ci=0
    c2=1
    c2i=0
print ("There are ",count, " fibonacci numbers in this array.")
