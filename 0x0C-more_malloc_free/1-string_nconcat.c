#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string (1)
 * @s2: string (2)
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int length1 = 0, length2 = 0, i = 0, j = 0;
while (s1 && s1[length1])
{
length1++;
}
while (s2 && s2[length2])
{
length2++;
}
if (n < length2)
{
string = malloc(sizeof(char) * (length1 + n + 1));
}
else
{
string = malloc(sizeof(char) * (length1 + length2 + 1));
}
if (!string)
{
return (NULL);
}
while (i < length1)
{
string[i] = s1[i];
i++;
}
while (n < length2 && i < (length1 + length2))
{
string[i++] = s2[j++];
}
while (n >= length2 && i < (length1 + length2))
{
string[i++] = s2[j++];
}
string[i] = '\0';
return (string);
}
