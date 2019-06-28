#include<stdio.h>
int main()
{
    int n,target,arr[100],sum=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            sum-=arr[i-1]+arr[i]+arr[i+1];
        }
    }
    printf("%d",sum);
    return 0;
}
