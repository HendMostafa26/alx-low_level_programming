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
printf("%d\n",n);
}
else if (n=0)
{
printf("%d\n",n);
}
else {
printf("%d\n",n);
}
return (0);
}
