#include"main.h"
/**
 * swap_int - Function to swap integers
 * @a: Integer
 * @b: Integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
