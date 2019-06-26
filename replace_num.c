#include<stdio.h>

int main()
{
    int n,dig,rem=0,val=1,a,b;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    while(n>=val)
    {
        dig=(n/val)%10;
        if(dig==a)
        {
            dig=b;
        }
        rem=dig*val+rem;
        val=val*10;
    }
    printf("%d",rem);
    return 0;
}
