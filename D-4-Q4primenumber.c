#include<stdio.h>
#include<math.h>
int main()
{
    int i,N,count=0,n;
    printf("Enter a number");
    scanf("%d",&N);
    n=sqrt(N);
    for(i=2;i<=n;i++)
    {
        if(N%i==0)
        {
        count=1;
        break;
        }
    }
    if(count!=1){
        printf("%d is a PRIME NUMBER",N);
    }
    else{
        printf("%d is a COMPOSITE NUMBER",N);
    }

}