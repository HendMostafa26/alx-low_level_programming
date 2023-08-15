#include"main.h"
/**
 * print_times_table - Print time table
 * @n: Integer
 * Return: void
 */
void print_times_table(int n)
{
int a, b, c;
if (n <= 15 && n >= 0)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (b == 0)
{
_putchar('0' + c);
}
else if (c < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + c);
}
else if (c >= 10 && c < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));
}
else if (c >= 100)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (c / 100));
_putchar('0' + (c / 10) % 10);
_putchar('0' + (c % 10));
}
}
_putchar('\n');
}
}
}
