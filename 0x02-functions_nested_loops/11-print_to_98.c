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
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
for (; n >= 98; n--)
{
if (n ==98)
{
printf("%d", n);
printf("\n");
break;
 }
else
{
printf("%d, ", n);
}
}
}
