/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int option;
    printf("1.celsius to fahrenheit \n 2.fahrenheit to celsius\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1: printf("Enter temperature in Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9 / 5) + 32;
                printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
                break;
        case 2: printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) * 5 / 9;
                printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
                break;
    }
    return 0;
}