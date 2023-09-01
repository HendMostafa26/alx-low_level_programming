#include"main.h"
/**
 * _atoi - Function
 * @s: string
 * Return: 0 or 1
 */
int _atoi(char *s)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
while (s[a] != '\0')
a++;
while (b < a && c == 0)
{
if (s[b] == '-')
++e;
if (s[b] >= '0' && s[b] <= '9')
{
d = s[b] - '0';
if (e % 2)
{
d = -d;
}
f = f * 10 + d;
c = 1;
if (s[b + 1] < '0' || s[b + 1] > '9')
{
break;
}
c = 0;
}
b++;
}
if (c == 0)
{
return (0);
}
return (f);
}
