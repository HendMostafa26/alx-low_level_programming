#include"main.h"
/**
 * _memcpy - copy memory area
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j = n;
for (i = 0; i < j; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
