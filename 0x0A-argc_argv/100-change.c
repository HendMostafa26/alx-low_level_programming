#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i;
int cents = 0;
int cost = atoi(argv[1]);
int change[] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
if (cost >= change[i])
{
cents = cents + cost / change[i];
cost = cost % change[i];
if (cost % change[i] == 0)
{
break;
}
}
}
printf("%d\n", cents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
