def pref(n,s):
    sor=sorted(s)
    boo=True
    for i in range(1,n-1):
        if(sor[0] in sor[i]):
            boo=True
            store=sor[0]
        else:
            boo=False
            break
        
        
    if(boo==True):
        return store
    else:
        return -1

n=int(input())
s=list(input().split())
print(pref(n,s))

