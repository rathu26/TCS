#include<stdio.h>

int main()
{
    int n,rev=0,rem=0,val=1;
    scanf("%d",&n);
    while(n>=val)
    {
        rem=(n/val)%10;
        rev=rev*10+rem;
        val=val*10;
    }   
    
    printf("%d",rev);
    return 0;
}
