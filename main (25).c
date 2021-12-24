/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int a, b, c, i, terms;
 printf("Enter number of terms: ");
 scanf("%d", &terms);
 a = 0;
 b = 1;
 c = 0;
 printf("Fibonacci terms: \n");
 for(i=1; i<=terms; i++)
 {
 printf("%d, ", c);
 a = b; 
 b = c;
 c = a + b; 
 }
 return 0;
}