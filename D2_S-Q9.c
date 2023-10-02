#include<stdio.h>
int main(){
    int rn,n,str;
    printf("enter the number of total terms");
    scanf("%d",&n);
    rn=1;
    while(rn<=n)
    {
    str=1;
    while(str<=rn)
    {
        printf("*");
        str=str+1;
    }
    printf(" ");
    rn=rn+1;
}
}
