//output:
1
 
2 * 3
 
4 * 5 * 6
 
7 * 8 * 9 * 10
 
11 * 12 * 13 * 14 * 15
 
//program 

#include <stdio.h>

int main() {
	int i, j, row,count=1;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
            {
                printf("%d\n",count++);
            }
            else
            {
                printf("%d * ",count++);
            }
            
        }
        printf(" \n");
    }
	return 0;
}

//output
4444
4414
4424
4434
4444

//program
#include <stdio.h>

int main()
{
    int row,count=1;
    
    scanf("%d",&row);
    for(int i=1;i<=row+1;i++)
    {
        
        for(int j=1;j<=row;j++)
        {
            if(j==row-1 && i>1)
            {
                printf("%d",count);
                count++;
            }
            else
            {
                printf("%d",row);
            }
        }
        printf("\n");
            
    }
    return 0;
}
