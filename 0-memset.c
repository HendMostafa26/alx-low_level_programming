#include"main.h"
/**
 * _memset - Function that fills memory with constant byte
 * @s: String
 * @b: Character
 * @n: Integer
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
