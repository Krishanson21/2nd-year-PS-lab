#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of term");
    scanf("%d",&n);
    int x=2*n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        
        for(k=1;k<=x;k++)
        {
            printf("*");
        }
        x=x-2;
        printf("\n");
        
    }
    x=3;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=x;k++)
        {
            printf("*");
        }
        x=x+2;
        printf("\n");
    }

}