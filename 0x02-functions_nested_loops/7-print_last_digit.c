#include"main.h"
/**
 * print_last_digit - Prints last digit
 * @h: Character
 * Return: 1 and 0
 */
int print_last_digit(int h)
{
int last_digit;
last_digit = h % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar ('0' + last_digit);
return (last_digit);
}
