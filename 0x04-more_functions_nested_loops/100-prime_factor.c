#include<stdio.h>
/**
 * main - Entry point for function
 * Return: 0 or 1
 */
int main(void)
{
long int n = 612852475143;
long int a = 2, c;
while (n != 0)
{
if (n / a != 0)
a = a + 1;
else
{
c = n;
n = n / a;
if (n == 1)
{
printf("%ld", c);
break;
}
}
}
printf("\n");
return (0);
}
