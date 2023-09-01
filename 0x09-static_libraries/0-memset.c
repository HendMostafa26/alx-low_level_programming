#include"main.h"
/**
 * _memset - Function to fill memory with constant byte
 * @s: string
 * @b: byte
 * @n: no of bytes
 * Return: char
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
