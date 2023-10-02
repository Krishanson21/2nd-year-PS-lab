#include<stdio.h>
int main(){
    float n,x,i,sum,den,num,sign;
    printf("enter the the total terms");
    scanf("%f",&n);
    printf("enter the value of x");
    scanf("%f",&x);
    x=x*22/7/180;
    sum=x;
    sign=-1;
    num=x;
    den=1;
    for(i=1;i<n;i++){
        num=num*x*x;
        den=den*(2*i)*(2*i+1);
        sum=sum+(num/den)*sign;
        sign=sign*(-1);
    }
    printf("the total sum is %f",sum);
}
