#include<stdio.h>
int main()
{
    int year1,year2,count=0;
    printf("Enter the range of year");
    scanf("%d%d",&year1,&year2);
    for(int i=year1;i<=year2;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
        {
            count++;
        }
    }
    printf("Number of leap year between the given range is %d",count);






}