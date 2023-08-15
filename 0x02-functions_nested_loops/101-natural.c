#include<stdio.h>
/**
 * main - Entry point for modulus
 * Return: 0 is success
 */
int main(void)
{
int a, b;
for (a = 0; a < 1024; a++)
{
if ((a % 3 == 0) && (a % 5 ==0)
b = b + a;
}
printf("%d\n", b);
return(0);
}
