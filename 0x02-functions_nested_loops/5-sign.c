#include"main.h"
/**
 * print_sign - Prints positive, negative and zero
 * @n: Character
 * Return: 1 is greater and -1 is less
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if(n < 0)
{
printf("-");
return (-1);
}
else
{
printf("0");
return (0);
}
}
