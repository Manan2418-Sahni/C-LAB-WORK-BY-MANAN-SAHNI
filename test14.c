//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%d %d", &x3, &y3);
    int area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    if (area == 0)
    {
        printf("The points are collinear.\n");
    }
    else
    {
        printf("The points are not collinear.\n");
    }


}