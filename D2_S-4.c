#include<stdio.h>
int main(){
    float num,den,sum,i,n,x,sign;
    printf("enter the total number of terms");
    scanf("%f",&n);
    printf("enter the value  of x");
    scanf("%f",&x);
    sum=1;
    den=1;
    num=1;
    sign=1;
    for(i=1;i<n;i++){
        num=num*x;
        den=den*i;
        sign=sign*-1;
        sum=sum+(num/den)*sign;
    }
    printf("the total sum is %f",sum);

}
