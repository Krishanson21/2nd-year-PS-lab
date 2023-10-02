#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of term");
    scanf("%d",&n);
    int p=1;
    for(i=1;i<=n;i++)
    {  
       int l=1;
       for(j=1;j<=i;j++)
       {
           printf("%d",l);
           l++; 
       }
       for(k=1;k<=2*(n-i);k++)
       {
           printf(" ");
       }
       int o=p;
       for(int m=1;m<=i;m++)
       {
           printf("%d",o);
           o--;
       }
       p++;
       printf("\n");

    }
}