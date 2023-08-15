#include "main.h"
/**
 * print_to_98 - function that prints numbers from n to 98
 * @n: Integer number
 * Return: void
 */
void print_to_98(int n)
{
for (; n <= 98; n++)
{
if (n == 98)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
_putchar('\n');
break;
}
else
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
_putchar(',');
_putchar(' ');
}
}
for (; n >= 98; n--)
{
if (n ==98)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
_putchar('\n');
break;
 }
else
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
_putchar(',');
_putchar(' ');
}
}
}
