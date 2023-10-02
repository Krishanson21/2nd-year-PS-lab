#include<stdio.h>
int main()
{
    int u,b,f=220;
    float t;
    printf("Enter the units of consumption to calculate bill ");
    scanf("%d",&u);
    if(u<=200)
    {
       t=f+0.05*220;
       printf("Total bill is %0.2f",t);
    }
    else if(u>200&&u<=400)
       {
        b=6*(u-200)+f;
        t=0.05*b+b;
        printf("Total bill is %.2f",t);
       }
    else if(u>400&&u<=600)
       {
        b=7*(u-200)+f;
        t=0.05*b+b;
        printf("Total bill is %.2f",t);
       }
    else  
       {
        b=8*(u-200)+f;
        t=0.05*b+b;
        printf("Total bill is %.2f",t);
       }
    return 0;
}