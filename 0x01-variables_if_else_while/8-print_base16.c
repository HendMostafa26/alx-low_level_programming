#include<stdio.h>
/**
 * main - Entry point for function putchar
 * Return: 0(Success)
 */
int main(void)
{
int h;
char m;
for (h = 0; h < 10; h++)
putchar('0' + h);
for (m = 'A'; m <= 'F'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
