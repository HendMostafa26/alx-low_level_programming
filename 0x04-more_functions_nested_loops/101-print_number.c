#include"main.h"
/**
 * print_number - print integer numbers
 * @n: Integer
 * Return: void
 */
void print_number(int n)
{
unsigned int i;
if (n < 0)
{
i = -n;
_putchar('-');
}
else
{
i = n;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar('0' + i % 10);
}
