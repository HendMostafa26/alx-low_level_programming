#include "main.h"
#include <stdio.h>
/**
 * _strlen - Print a string
 * @c: Character
 * Return: 0 or 1
 */
int _strlen(char *s)
{
int m = 0;
while (*s != '\0')
{
m++;
s++;
}
return (m);
}
