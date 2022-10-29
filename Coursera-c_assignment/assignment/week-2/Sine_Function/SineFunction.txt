#include<stdio.h>
#include<math.h>

int main(void)
{
    double sinValue,number;
    printf("Enter any number between 0 to 1:");
    scanf("%lf",&number);

    sinValue=sin(number);
    printf("\n The Sine value of %lf = %f", number, sinValue);
    
}