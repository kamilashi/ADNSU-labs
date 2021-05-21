from decimal import Decimal, ROUND_UP, ROUND_DOWN
print('This program calculates the maximum amount of fee the bank can reveive merging N accounts into one by taking P% of the resulted sum each time a pair of accounts is merged. ')
print('Enter the number of accounts N and the percentage P:')

n,p=map(float,input().split()) 
G=[] 
G = list(map(float, input().split())) 
su = 0 
G.sort() 
mult=round((1-p/100),3) 
l=int(n)
flag=0
while(n!=1): 
    su=round((G[0]+G[1])*(mult),2)
    S=round(su,2) 
    del G[0] 
    del G[0] 
    l-=2
    flag=0
    for i in range(0,l): 
        if(S<G[i]): 
            G.insert(i,S) 
            flag=1 
            break 
    if(flag==0): 
        G.append(S) 
    l+=1 
    n=l 
ans=G[0] 
rans = round(ans,2) 
print('{0:.2f}'.format(rans))
