#include"main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
i = i + _strlen_recursion(s + 1);
}
return (i);
}
