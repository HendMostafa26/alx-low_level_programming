#include"main.h"
/**
 * times_table - Function to print all time tables
 * Return: 0 and 1
 */
void times_table(void)
{
int a, b, c, d, e;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
d = c % 10;
e = (d - c) / 10;
_putchar(',');
_putchar(' ');
_putchar('0' + d);
_putchar('0' + e);
}
else
{
if (b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('0' + c);
}
}
_putchar('\n');
}
}
  
