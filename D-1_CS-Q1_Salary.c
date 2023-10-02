#include<stdio.h>
int main(){
    int Salary,allow;
    char krade;
    float hra,da,pf,Total;
    printf("Enter basic salary");
    scanf("%d",&Salary);
    printf("Enter the grade");
    scanf(" %c",&krade);
    
    if(krade=='A'){
        allow=1700;
    }
     else if(krade=='B'){
        allow=1500;
    }
    else if(krade=='C'){
        allow=1500;
    }
     else{
        printf("Invalid krade");
    }
    hra=0.2*Salary;
    da=0.5*Salary;
    pf=0.11*Salary;
    Total=Salary+hra+da+allow-pf;
    printf("%f",Total);
}