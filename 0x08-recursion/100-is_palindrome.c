#include"main.h"
int palin(char *s, int i, int j);
int drome(char *s);
/**
 * is_palindrome - palindrome string
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (palin(s, 0, drome(s)));
}
/**
 * drome - function
 * @s: string
 * Return: integer
 */
int drome(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + drome(s + 1));
}
/**
 * palin - function
 * @s: string
 * @i: integer
 * @j: integer
 * Return: integer
 */
int palin(char *s, int i, int j)
{
if (*(s + i) != *(s + j - 1))
{
return (0);
}
if (i >= j)
{
return (1);
}
return (palin(s, i + 1, j - 1));
}
