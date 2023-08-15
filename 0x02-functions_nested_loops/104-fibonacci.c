#include<stdio.h>
/**
 * main - Entry point for the function
 * Return: 0 or 1
 */
int main(void)
{
unsigned long i;
unsigned long a = 1000000000;
unsigned long before = 1;
unsigned long after = 2;
unsigned long before_first;
unsigned long before_second;
unsigned long after_first;
unsigned long after_second;
printf("%ld", before);
for (i = 1; i < 91; i ++)
{
printf(", %ld", after);
after = after + before;
before = after - before;
}
before_first = (before / a);
before_second = (before % a);
after_first = (after / a);
after_second = (after % a);
for (i = 92; i < 99; i++)
{
printf(", %ld", after_first + (after_second / a));
printf("%ld", after_second);
after_first = after_first + before_first;
before_first = after_first - before_first;
after_second = after_second + before_second;
before_second = after_second - before_second;
}
printf("\n");
return (0);
}
