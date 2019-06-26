str=input()
str1=str.split()
count=len(str1)
if(count%2==0):
    a=(count//2)
    print(*str1[a-1:a+1])
    
else:
    a=(count//2)
    print(*str1[a])
