#include"main.h"
#include<stdlib.h>
/**
 * create_array - Function to create array
 * @size: unsigned integer
 * @c: string
 * Return: String
 */
char *create_array(unsigned int size, char c)
{
char *string;
unsigned int i;
string = malloc(sizeof(char) * size);
if (size == 0 || string == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
string[i] = c;
}
return (string);
}
