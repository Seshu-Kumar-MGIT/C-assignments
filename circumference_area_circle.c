// Online C compiler to run C program online
#include <stdio.h>
#define pie 3.14

int main() {
    // Write C code here
    float r,circumference,area,d;
    int opt;
    printf("Option :\n 1.Based on Diameter\n2.Based on Radius\n");
    printf("Enter option :\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: printf("Enter the diameter of the circle:\n");
                scanf("%f",&d);
                r=(d/2);
                area=pie*r*r;
                circumference=2*pie*r;
                printf("Area of the circle: %f \n",area);
                printf("circumference of the circle: %f",circumference);
                break;
        case 2:printf("Enter the radius of the circle:\n");
                scanf("%f",&r);
                area=pie*r*r;
                circumference=2*pie*r;
                printf("Area of the circle: %f \n",area);
                printf("circumference of the circle: %f",circumference);
                break;             
    }
    return 0;
}