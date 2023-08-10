#include<stdio.h>
/**
 *main - Entry point to function printf
 *return: 0 is success
 */
int main(void)
{
char c;
int i;
float f;
 printf("Size of a char: %lu.\n", (unsigned char)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned short int)sizeof (i));
printf("Size of a long int: %ln.\n", (unsigned long int)sizeof (i));
printf("Size of a long long int: %ln.\n", (unsigned long long int)sizeof (i));
 printf("Size of a float: %ln.\n", (float)sizeof (f));
return (0);
}
  
