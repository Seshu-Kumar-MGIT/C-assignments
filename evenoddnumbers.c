/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=100,i,j;
    
    printf("Even numbers are :");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           printf("%d\t",i); 
        }
        
    }
    
    printf("\n");
    printf("Odd numbers are :");
    for(j=1;j<=n;j++)
    {
        if(j%2!=0)
        {
           printf("%d\t",j); 
        }
        
    }
    
}
