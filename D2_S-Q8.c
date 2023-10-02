#include<stdio.h>
int main(){
    int n,sum,i;
    printf("enter the number of terms");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i*(i+1)*(i+2);
    }
    printf("total sum is %d",sum);

}
