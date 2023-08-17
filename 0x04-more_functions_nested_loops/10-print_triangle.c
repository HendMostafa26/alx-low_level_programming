#include"main.h"
/**
 * print_triangle - print a triangle
 * @size: Integer
 * Return: void
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = i; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
