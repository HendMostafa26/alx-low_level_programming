#include<stdio.h>
/**
 * main - Entry point for the function
 * Return: 0 or 1
 */
int main(void)
{
int i;
unsigned long a = 1, b = 2, c, sum = 0;
for (i = 1; i <= 33; i++)
{
if (a < 4000000 && (a % 2) == 0)
{
sum = sum + a;
}
c = a + b;
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}
 
