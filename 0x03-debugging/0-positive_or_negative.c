#include <stdio.h>
#include"main.h"
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - Function to test if the number is positive or negative
 * @i: Integer
 *Return: Void
 */
void positive_or_negative(int i)
{
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
