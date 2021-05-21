print('This program finds all the numbers in range (1,n) that can be represented as the sum of squares of 2 different natural numbers.')
print('Enter n: (n <= 10000)')
n= int(input())
F=set()
s = 0
for i in range (1,n):
    for j in range (i+1,n):
        s = i*i+j*j
        if s>n:
            i=n
            break
                       
        else:
            F.add(s) 
            
F = sorted(F)
print('Result:')
for i in F:
    print(i,end=' ')
