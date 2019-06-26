//replace with index value

#include<stdio.h>
int main()
{
    int n,i,temp=0,a1[100];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        a1[i]=(a1[a1[i]]%n)*n+a1[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a1[i]/n);
    }
    return 0;
}

//in python

n=int(input())
a=list(map(int,input().split()))
for i in range(0,n):
    a[i]=(a[a[i]]%n)*n+a[i]
for i in range(0,n):
    print(a[i]//n,end="")
    
