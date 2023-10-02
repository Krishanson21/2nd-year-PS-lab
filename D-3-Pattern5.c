#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of term");
    scanf("%d",&n);
    char ch='A'+n-1;
    for(i=1;i<=n;i++)
    {
        
        char a=ch;
        for(j=1;j<=i;j++)
        {
            printf("%c\t",a);
            a+=1;
        }
        printf("\n");
        ch=ch-1;
        
    }
}