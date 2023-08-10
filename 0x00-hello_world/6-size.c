#include<stdio.h>
/**
 *main - Entry point to function printf
 *return: 0 is success
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int: %ln.\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %ln.\n", (unsigned long)sizeof(lli));
printf("Size of a float: %ln.\n", (float)sizeof (f));
return(0);
}
  
