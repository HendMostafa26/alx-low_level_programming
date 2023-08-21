#include"main.h"
/**
 * puts_half - print half of string
 *@str: string
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int j;
int n;
for (j = 0; str[j] != '\0'; j++)
{
i++;
}
n = (i / 2);
if ((i % 2) == 1)
{
n = ((i + 1) / 2);
}
for (j = n; str[j] != 0; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
