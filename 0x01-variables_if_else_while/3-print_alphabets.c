#include<stdio.h>
/**
 * main - Entry point for function putchar
 * Return: 0(Success)
 */int main(void)
{
char h, m;
for (h = 'a'; h <= 'z'; h++)
{
putchar(h);
}
for (m = 'A'; m <= 'Z'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
