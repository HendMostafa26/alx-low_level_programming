#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b < 10; b++)
{
for (a = 0; a < 15; a++)
{
if (a >= 10)
{
_putchar('0' + a / 10);
}
_putchar('0' + a % 10);
}
_putchar('\n');
}
}
