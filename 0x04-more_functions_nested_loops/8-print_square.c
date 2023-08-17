#include"main.h"
/**
 * print_square - print a square
 * @size: size of a square
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int h, m;
for (h = 0; h < size; h++)
{
for (m = 0; m < size; m++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
