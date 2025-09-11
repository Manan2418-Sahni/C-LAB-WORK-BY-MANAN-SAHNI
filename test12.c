//Q2. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).
//Underweight = <18.5, Normal weight = 18.5-24.9, Overweight = 25-29.9, Obesity = BMI of 30 or greater
#include<stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter weight in kgs: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    
    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obesity\n");
    }
    
    return 0;
}