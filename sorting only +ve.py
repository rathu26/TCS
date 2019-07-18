n=int(input())
a=list(map(int,input().split()))
b=[]
c=[]
for i in range(0,n):
    if(a[i]>=0):
        b.append(a[i])
    else:
        c.append(a[i])
b=sorted(b)
c1,c2=0,0
real=[]
for i in range(0,n):
    if(a[i]<=0):
        real.append(c[c1])
        c1=c1+1
    else:
        real.append(b[c2])
        c2=c2+1
print(*real)
