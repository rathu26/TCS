//reverse a number without division
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


//reverse by two numbers

#include<stdio.h>

int main()
{
    int n,dig,rem=0,val=1;
    scanf("%d",&n);
   
    while(n>=val)
    {
        dig=(n/val)%100;
        n=n-(dig)*val+(((dig%10)*10)+dig/10)*val;
        val=val*100;
    }
    printf("%d",n);
    return 0;
}
