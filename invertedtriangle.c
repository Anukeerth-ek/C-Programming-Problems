#include<stdio.h>
void main()
{
    int i,j,k,limit;
    printf("Enter a limit : ");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");

        }
        for(k=1;k<=limit-i;k++)
        {
            printf("* ");

        }
    
    printf("\n");
    }

    }