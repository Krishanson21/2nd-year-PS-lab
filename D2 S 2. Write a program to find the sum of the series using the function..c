#include<stdio.h>
int main(){
    float i,sum,den,num,n;
    printf("enter the total number of terms");
    scanf("%f",&n);
    sum=1;
    num=1;
    for(i=2;i<=n;i++){
        den=i;
        num=num*i;
        sum=sum+(num/den);
    }
    printf("the total sum is %f",sum);
}
