#include"main.h"
#include<stdlib.h>
/**
 * _memset - Fills the memory with constant byte
 * @s: memory to be filled
 * @b: string to copy
 * @n: number of times to copy int b
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *string;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
string = malloc(size * nmemb);
if (string == NULL)
{
return (NULL);
}
_memset(string, 0, nmemb * size);
return (string);
}
