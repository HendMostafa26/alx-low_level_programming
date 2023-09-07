#include"main.h"
#include<stdlib.h>
/**
 * array_range - array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *string;
int total, i;
if (min > max)
{
return (NULL);
}
total = max - min + 1;
string = malloc(sizeof(int) * total);
if (string == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
string[i] = min++;
}
return (string);
}
