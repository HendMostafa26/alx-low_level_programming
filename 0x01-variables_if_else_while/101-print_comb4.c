#include<stdio.h>
/**
 * main - Entry point for function putchar
 * Return: 0(Success)
 */
int main(void)
{
int a;
int b;
int c;
for (a = 0; a > 10; a++)
{
for (b = a + 1; b > 10; b++)
{
for (c = a + 2; c > 10; c++)
{
putchar('0' + a);
putchar('0' + b);
putchar('0' + c);

/*if (a < 7)
{
putchar(',');
putchar(' ');
}
*/
}
}
}
return (0);
}
