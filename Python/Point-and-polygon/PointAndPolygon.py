print('This program determines whether a point is inside, outside or on border of an arbitrary polygon. ')

import math
def checkP(st2,st3):
    return st2+st3
def trig(st1,st2,st3):
    p=(st1+st2+st3)/2
    p0=round((p*(p-st1)*(p-st2)*(p-st3)),2)
    #print(p0)
    S0=math.sqrt(abs(p0))
    #print('S trig = ',S0)
    return S0

def f(X,Y,n,a,b):
    Perfig=0
    Perdot=0
    s1=s2=0
    for i in range (0,n-2):
        s1+=X[i]*Y[i+1]
        
    s1+=X[n-1]*Y[1]
    
    for i in range (0,n-2):
        s2+=X[i+1]*Y[i]
        
    s2+=X[1]*Y[n-1]
    
    S=(s1-s2)/2
    S=abs(S)
    #print('S',S)
    Sdot=0
    
    for i in range (0,n-1):
        st1=math.sqrt((X[i+1]-X[i])**2+(Y[i+1]-Y[i])**2)
        st2=math.sqrt((X[i]-a)**2+(Y[i]-b)**2)
        st3=math.sqrt((X[i+1]-a)**2+(Y[i+1]-b)**2)
        Perfig+=st1
        Perdot+=(st2)
        Sdot+=trig(abs(st1),abs(st2),abs(st3))
    st1=math.sqrt((X[n-1]-X[0])**2+(Y[n-1]-Y[0])**2)
    st2=math.sqrt((X[i]-a)**2+(Y[i]-b)**2)
    st3=math.sqrt((X[0]-a)**2+(Y[0]-b)**2)
    Perfig+=st1
    Perdot+=(st2)
    #print(Perfig)
    #print(Perdot)
    Sdot+=trig(abs(st1),abs(st2),abs(st3))
    Sdot=round(Sdot,2)
    #print('Sdot',Sdot)

    if(Sdot<=S):
        if(int(Perfig)-int(Perdot)<=1):
            return 1
        #print('ON BORDER')
        else:
            return 3
    elif(Sdot>S):
        return 2
        #print('OUTSIDE')
        
count = 0       
R=[]
while(2):
    print('Enter the number of vertices of a polygon:')
    n=int(input())
    if(n in (0,1,2)):
        print('must be at least 3!')
        break
    else:
        count+=1
    X=[0]*n
    Y=[0]*n
    print('Enter the ',n,' pairs of coordinates:')
    for i in range (0,n):
        X[i],Y[i]=map(int,input().split())
    print('Enter the point coordinates:')
    a,b=map(int,input().split())   
    r=f(X,Y,n,a,b)
    R.append(r)
    break
    #print(X,' ',Y)
if (count!=0):
    for i in range(0,count):
        if(R[i]==1):
            print('ON BORDER')
        elif(R[i]==2):
            print('OUTSIDE')
        else:
            print('INSIDE')
