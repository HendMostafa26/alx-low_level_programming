#include"main.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
}
return (0);
}
