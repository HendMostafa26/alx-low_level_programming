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
printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %n byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %n byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %n byte(s)\n", (float)sizeof(f));
return (0);
}  
