#include<stdio.h>
/**
 * main - Entry point for function printf
 * Return: 0 or 1
 */
int main(void)
{
unsigned long a = 0, b = 1, c, sum;
for (c = 0; c < 50; c++)
{
sum = a + b;
printf("%d", sum);
a = b;
b = sum;
if (c == 49)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
