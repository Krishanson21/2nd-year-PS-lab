#include<stdio.h>
int main(){
    int num,sum,i,fact;
    sum=0;
    fact=1;
    printf("enter the number of terms");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
        sum=sum+fact;
    }
    printf("the total sum is %d",sum);
}
