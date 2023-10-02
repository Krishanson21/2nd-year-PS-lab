#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of term");
    scanf("%d",&n);
    int k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
}