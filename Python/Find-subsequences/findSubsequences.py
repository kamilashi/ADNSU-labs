print('This program outputs the number of the subsequent subsequences in a sequence, where')
print('x0 = a,')
print('xi = ((xi-1 * b + c) % m) + 1 for i = 1, 2, ... n - 1')
print('Input values: the number of tests to conduct - t (t < 500)')
print('a,b,c,m,n in a row, for each t (0 ≤ a, b, c ≤ 1000, 0 < m, n ≤ 10000) ')
print('')
print('Enter t:')
t = int(input())
T=[0]*t
MAXN = 10000
print('Enter a,b,c,m,n:')
for i in range (0,t):
    a, b, c, m, n = map(int,input().split())
    X = [0]*MAXN
    S = [0]*MAXN
    mod = [0]*MAXN
    X[0] = a
    S[0] = a%m
    for j in range (1,n):
        X[j] = (X[j-1]*b+c)%m+1
        S[j] = (S[j-1] + X[j])%m
    
    
    for l in range (0,n):
        mod[S[l]]+=1

    mod[0]+=1
    res = 0

    for d in range (0,m):
        res+=mod[d]*(mod[d]-1)/2

    T[i]=int(res)
    
    
for b in range (1,t+1) :
    print('Case ',b,': ',T[b-1],sep='')
