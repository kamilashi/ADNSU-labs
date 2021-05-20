print('This is a program that finds the biggest and the smallest N-digit number, with the sum of its digits being equal an arnitrary number M.')
print('Enter n and m:')
n,m = map(int,input().split())
a = []
b = []
for i in range (0,m//9):
    a.append(9)
if (m%9!=0):
    a.append((m%9))


if(m%9!=0):
    t = 1
else:
    t = 0
for i in range (0,n-m//9-t,1):
    a.append(0)

b = list(a)
b.reverse()
#print(a)
#print(b)

if(b[0]==0):
    for i in range (1,len(b)):
        if(b[i]!=0):
            b[0]=1
            b[i]-=1
            break
sa = [str(e) for e in a]
sb = [str(e) for e in b]

print('Result:')
print("".join(sb),"".join(sa))
