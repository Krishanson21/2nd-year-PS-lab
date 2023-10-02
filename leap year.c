#include<stdio.h>
void main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {  printf("a is greatest"); 
           printf("%d",a);}
        else 
        { printf("c is greatest");
        printf("%d",c);}

    }
        
    else 
    {
        if (b>c)
        { printf("b is greater");
        printf("%d",b);}
        else
        {printf("c is greater");
        printf("%d",c);}
    }
    
    
}