#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * array_iterator - function
 * @array: pointer
 * @size: size
 * @action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int h;
if (array == NULL || action == NULL)
{
return;
}
for (h = 0; h < size; h++)
{
action(array[h]);
}
}
