#include <stdio.h>
#include<math.h>
int func2(int n1)
{
    int c=0,val=4;
    if(n1==1) return 2;
    if(n1==2) return 3;
    for(c=2;c<n1;val++)
    {
       if(val%2)
        {
            int sqrtval=(int)sqrt(val);
            int flag=0;
            for(int fact=3;fact<=sqrtval;fact+=2)
                if(val%fact==0)
                {
                    flag=1;
                    break;
                }
                if(flag==0) 
                    c++;
        }
    }
    return val-1;
}
int func1(int n1)
{
    if(n1<=2) return 1;
    return func1(n1-1)+func1(n1-2);
}
int main()
{
int n=0;
scanf("%d",&n);
printf("%d",n%2?func1((n+1)/2):func2(n/2));
return 0;
}

