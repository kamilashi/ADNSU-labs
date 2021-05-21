print('This program converts a fraction into a decimal one with k-digit precision after the decimal point.')
print('Enter the numerator and denominator of a fraction and k for precision:')
n,m,k=map(int,input().split())
a=[]
#a=str(a)
dig = (n/m)
dig = int (dig)
i= 1
i = int(i)
#print(dig)
a.append(dig)
for i in range (1,k+1):
    if(i==1):
        #print('.')
        a.append('.')
    n=(n-m*dig)*10
    dig=n/m
    dig = int (dig)
    #print(dig)
    a.append(dig)

print('Result:')
print(*a, sep='')
