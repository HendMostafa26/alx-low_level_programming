#include<stdio.h>
/**
 * main - Entry point for function
 * Return: 0 or 1
 */
int main(void)
{
unsigned long n = 612852475143;
int i;
for (i = 3; i < 782848; i = i + 2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
printf("%lu\n", n);
return (0);
}
