print('This is a program that multiplies two arbitrary matrices.')
print('Enter the dimentions of matrix A: (not bigger than 100 × 100)')
na,ma = map(int,input().split())


A = [[0 for i in range(ma)] for j in range(na)] 

print('Enter the elements of matrix A: (absolute value not bigger than 100)')
for i in range (0,na):
    A[i] = list(map(int, input().split())) 
        

print('Enter the dimentions of matrix B: (not bigger than 100 × 100)')
nb,mb = map(int,input().split())
B = [[0 for i in range(mb)] for j in range(nb)] 

print('Enter the elements of matrix B: (absolute value not bigger than 100)')
for i in range (0,nb):
    B[i] = list(map(int, input().split()))
    
    
i=0
j=0


if (nb==ma):
    print('A x B = (',na,' x ', mb,') :')
    #print (na,mb)
    C = [[0 for i in range(mb)] for j in range(na)]
    for i in range (0,na):
        for j in range (0,mb):
            for d in range (0,nb):
                C[i][j] += A[i][d] * B[d][j]
    for i in range (0,na):
        print(*C[i], sep=' ')
else:
    print('Multiplication not possible.')
