#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch='A'+i-1;
            printf("%c\t",ch);
        }
        printf("\n");
    }
}