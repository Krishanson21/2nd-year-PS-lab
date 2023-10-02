#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x and y coordinate: ");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    {
        printf("Point(%d,%d) lie in first quadrant",x,y);
    }
    else if(x<0&&y>0)
    {
        printf("Point(%d,%d) lie in second quadrant",x,y);
    }
    else if(x<0&&y<0)
    {
        printf("Point(%d,%d) lie in third quadrant",x,y);
    }
    else if(x>0&&y<0)
    {
        printf("Point(%d,%d) lie in fourth quadrant",x,y);
    }
    else
    {
        printf("Either the point lie on origin or any one of the axis");
    }
}