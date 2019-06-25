#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int n,j,i,start,end,k;
    scanf("%[^\n]s",str);
    start=end=0;
    for(i=0;str[i];i++)
    {
        j=k=i;
        if(str[i]==str[i+1])
        {
            k++;
        }
        while(j>=0 && str[k]!='\0')
        {
            if(str[j]!=str[k])
                break;
            j--;
            k++;
        }    
        
        if(k-j-2>end-start)
        {
            start=j+1;
            end=k-1;
            
        }
    }
        
    if(start!=end)
    {
        while(start<=end)
        {
            printf("%c",str[start++]);
        }
    }
    
    
}
