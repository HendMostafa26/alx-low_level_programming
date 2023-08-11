#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for function printf
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int modulo = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (modulo > 5)
printf("Last digit of %d is %d and is greater than 5\n",n,modulo);
else if (module < 6 && module ! = 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",n,modulo);
}
else if (module == 0)
{
printf ("Last digit of %d is %d and is 0\n",n,modulo)
}
return (0);
}
