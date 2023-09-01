#include"main.h"
/**
 * _strcat - Function to print a string
 * @dest: String
 * @src: String
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
  int i = 0;
  int j;
  while (dest[i])
    {
      i++;
    }
  for (j = 0; src[j]; j++)
    {
      dest[i] = src[j];
      i++;
    }
  return (dest);
}
