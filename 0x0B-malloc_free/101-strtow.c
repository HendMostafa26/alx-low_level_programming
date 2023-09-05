#include "main.h"
#include <stdlib.h>
/**
 * counter - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: integer
 */
int counter(char *s)
{
int i, j, k;
i = 0;
k = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
i = 0;
else if (i == 0)
{
i = 1;
k++;
}
}
return (k);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: string
 */
char **strtow(char *str)
{
char **x, *y;
int a, b = 0, c = 0, d, e = 0, start, end;
while (*(str + c))
c++;
d = counter(str);
if (d == 0)
return (NULL);
x = (char **) malloc(sizeof(char *) * (d + 1));
if (x == NULL)
return (NULL);
for (a = 0; a <= c; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (e)
{
end = a;
y = (char *) malloc(sizeof(char) * (e + 1));
if (y == NULL)
return (NULL);
while (start < end)
*y++ = str[start++];
*y = '\0';
x[b] = y - e;
b++;
e = 0;
}
}
else if (e++ == 0)
start = a;
}
x[b] = NULL;
return (x);
}
