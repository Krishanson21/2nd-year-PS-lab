#include<stdio.h>
int main(){
    float x,num,den,i,sum,n,sign;
    printf("enter the number of terms");
    scanf("%f",&n);
    sum=1;
    den=1;
    num=1;
    sign=-1;
    for(i=1;i<n;i++){
      num=num+i;
      den=den*(2*i)*(2*i-1);
      sum=sum+(num/den)*sign;
      sign=sign*(-1);
    }
    printf("%f",sum);
}
