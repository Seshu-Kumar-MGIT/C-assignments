#include<stdio.h>

int main( )
{
int a[5]={10,20,30,40,50},*p;
p=a; /*address of array can be pointed into the pointer without
the use of & operator*/
printf("%d",*++p); /*dereferencing the next address*/
printf("%d",*++p); /*dereferencing the next address*/
printf("%d",++*p); /*dereferencing the address and adding 1 to
the element */
return 0;
}
    

