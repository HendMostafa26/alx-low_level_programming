#include"main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
int i;
int j = 0;
for (i = 0; s[i] != '\0' ; i++)
{
j++;
}
for (i = j - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
