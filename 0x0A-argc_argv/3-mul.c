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
int multiply;
if (argc == 3)
{
multiply = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multiply);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
