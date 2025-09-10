//Q.3 WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include<stdio.h>
int main()
{
    int L1 , B1 , L2 , B2 , L3 , B3 ;
    int R1 , R2 , R3 ;
    printf("Enter the lenght and breadth of rectangle 1: ");
    scanf("%d %d",&L1,&B1);
    printf("Enter lenght and breadth of rectangle 2: ");
    scanf("%d %d",&L2,&B2);
    printf("Enter the lenght and breadth of rectangle 3: ");
    scanf("%d %d",&L3,&B3);
    R1 = 2*(L1+B1);
    R2 = 2*(L2+B2);
    R3 = 2*(L3+B3);
    if (R1>R2 && R1>R3)
    {
        printf("Rectangle 1 has the highest perimeter : %d",R1);
    }
    else if (R2>R1 && R2>R3)
    {
        printf("Rectangle 2 has the highest perimeter : %d",R2);
    }    
    else if (R3>R1 && R3>R2)
    {
        printf("Rectangle 3 has the highest perimeter : %d",R3);
    }
    else
    {
        printf("ALL HAVE SAME PERIMETER");
    }
    return 0;
}    