#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * check - checker
 * @s: string
 * Return: 0 or 1
 */
int check(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int length1, length2, length, i, carr, dig1, dig2, *result, h = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !check(s1) || !check(s2))
errors();
length1 = _strlen(s1);
length2 = _strlen(s2);
length = length1 + length2 + 1;
result = malloc(sizeof(int) * length);
if (!result)
return (1);
for (i = 0; i <= length1 + length2; i++)
result[i] = 0;
for (length1 = length1 - 1; length1 >= 0; length1--)
{
dig1 = s1[length1] - '0';
carr = 0;
for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
{
dig2 = s2[length2] - '0';
carr = carr + result[length1 + length2 + 1] + (dig1  *dig2);
result[length1 + length2 + 1] = carr % 10;
carr /= 10;
}
if (carr > 0)
result[length1 + length2 + 1] += carr;
}
for (i = 0; i < length - 1; i++)
{
if (result[i])
h = 1;
if (h)
_putchar(result[i] + '0');
}
if (!h)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
