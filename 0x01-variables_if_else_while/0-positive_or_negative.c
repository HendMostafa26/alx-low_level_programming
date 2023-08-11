#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for function if else
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf(int n,"is positive\n");
}
else if (n<0)
{
printf(int n,"is negative\n");
}
else {
printf(int n,"is zero\n");
}
return (0);
}
