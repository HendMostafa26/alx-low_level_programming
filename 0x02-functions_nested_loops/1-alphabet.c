#include<stdio.h>
#include"main.h"
/**
 * main - Entry point for function putchar
 * Return: 0 for success
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar (c);
}
putchar('\n');
return (0);
}
