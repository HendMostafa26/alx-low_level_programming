#include"main.h"
/**
 * reverse_array - Reverse an array
 * @n: array
 * @a: array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j, k;
while (a[i])
{
i++;
}
for (i = 0, j = (n - 1); i < j; i++, j--)
{
k = a[i];
a[i] = a[j];
a[j] = k;
}
}
