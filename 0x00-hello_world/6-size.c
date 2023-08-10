#include<stdio.h>
/**
 *main - Entry point to function printf
 *Return: 0 is success
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (long unsigned int)sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", (long unsigned int)sizeof(lli));
printf("Size of a float: %f byte(s)\n", (float)sizeof(f));
return (0);
}  
