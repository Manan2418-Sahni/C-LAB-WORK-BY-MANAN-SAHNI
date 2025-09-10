//Q1.WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user

#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("Enter the sides of triangle: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        {
            printf("the triangle is equilateral");
        }
        else if(a==b || b==c || c==a)
        {
            printf("the triangle is isoceles");
        }
        else if((a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b))
        {
            printf("the triangle is right angled");
        }
        else 
        {
            printf("the triangle is scalene");
        }    
    }
    else
    {
        printf("the triangle is not valid");
    }         
    return 0;
}