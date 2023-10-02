#include<stdio.h>
int main(){
    float num,den,sum,i,n,x;
    printf("enter the total number of terms");
    scanf("%f",&n);
    printf("enter the value  of x");
    scanf("%f",&x);
    sum=1;
    den=1;
    num=1;
    for(i=1;i<n;i++){
        num=num*x;
        den=den*i;
        sum=sum+(num/den);
    }
    printf("the total sum is %f",sum);

}
