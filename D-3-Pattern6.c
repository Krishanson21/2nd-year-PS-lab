#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        int l=i;
        for(k=1;k<=i;k++){
            printf("%d",l);
            l++;
        }
        int x=(i-1)*2;
        for(int m=1;m<=i-1;m++){
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
}
