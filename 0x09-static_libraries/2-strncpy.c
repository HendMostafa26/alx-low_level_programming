#include"main.h"
/**
 * _strncpy - Function to copy string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: 0 or 1
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (dest[i])
{
i++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
