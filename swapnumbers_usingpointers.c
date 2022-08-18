#include<stdio.h>

int main( )
{
int a,b,*p1,*p2,*p3;
printf("enter a and b:");
scanf("%d%d",&a,&b);
p1=&a;
p2=&b;
p3=p1;
p1=p2;
p2=p3;
printf("Swapped numbers:\n");
printf("%d\t%d",*p1,*p2);
return 0;
}
    

