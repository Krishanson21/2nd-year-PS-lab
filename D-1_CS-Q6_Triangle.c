#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter side of the triangle");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2>side3&&side1+side3>side2&&side2+side3>side1)
    {
        if(side1==side2==side3)
        {
            printf("Given triangle is equilateral triangle");
        }
        else if(side1==side2||side2==side3||side3==side1)
        {
            printf("Given triangle is isosceles triangle");
        }
        else
        {
            printf("Given triangle is scalene triangle");
        }
    }
    else
    {
        printf("Invalid input");
    }
}