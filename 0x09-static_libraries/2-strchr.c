#include"main.h"
/**
 * _strchr - search for a character
 * @s: string
 * @c: character
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);
}
