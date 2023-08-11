#include<stdio.h>
/**
 * main - Entry point for function putchar
 * Return: 0(Success)
 */
int main(void)
{
int h;
for (h = 0; h < 10; h++)
if (h < 9)
{
putchar('0' + h);
putchar(',');
}
else
{
putchar('0' + h);
}
putchar('\n');
return(0);
}
