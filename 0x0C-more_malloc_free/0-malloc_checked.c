#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - Function to allocate memory
 * @b: Unsigned integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
int *value = malloc(b);
if (value == NULL)
{
exit(98);
}
return (value);
}
