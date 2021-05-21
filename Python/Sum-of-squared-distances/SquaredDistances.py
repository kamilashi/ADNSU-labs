print('This program calculates the sum of squared distances between n points on the xy plane')
print('Enter the number of points:')
n = int(input())
X = [0]*n
Y = [0]*n
i=j=0
print('Enter their coordinates:')
for i in range (0,n):
    X[i],Y[i]=map(int,input().split())
S = 0
for i in range (0,n-1):
    for j in range (i+1,n):
        S+=((X[i]-X[j])**2) + ((Y[i]-Y[j])**2)

print(int(S))
