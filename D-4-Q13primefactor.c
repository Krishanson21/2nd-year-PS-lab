#include<stdio.h>
#include<math.h>
int main()
{
    int i,N,count=0,n;
    printf("Enter a number");
    scanf("%d",&N);
    n=sqrt(N);
    while(N%2==0){
        printf("2");
        printf("\n");
        N=N/2;
    }
    for(i=3;i*i<=N;i=i+2){
        while(N%i==0){
        printf("%d",i);
        printf("\n");
        N=N/i;
        }
    }
    if(N>1)
    {
        printf("%d",N);
        printf("\n");
    }
}