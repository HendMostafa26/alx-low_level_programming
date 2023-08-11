#include<stdio.h>
/**
 * main - Entry point for function putchar
 * Return: 0(Success)
 */
int main(void)
{
int a;
int b;
for (a = 0; b = 0; a < 10; b < 10; a++; b++)
{
if ( a != b)
{
putchar('0' + a);
putchar('0' + b);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
