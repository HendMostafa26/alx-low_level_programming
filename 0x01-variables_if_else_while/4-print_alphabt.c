#include<stdio.h>
/**
 * main - Entry point for function putchar
 * Return: 0(Success)
 */
int main(void)
{
char h;
for (h = 'a'; h <= 'z'; h++)
{
if (h != 'e' && h != 'q')
{
putchar(h);
}
}
putchar('\n');
return (0);
}
