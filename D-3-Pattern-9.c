#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    int x=2*n-1;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        x=x-2;
        for(k=1;k<=x;k++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
}