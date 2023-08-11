#include<stdio.h>
int main(void)
{
int a;
int b;
for (a = 00; a < 10; a++)
{
for (b = a + 00; b < 10; b++)
{		  
putchar('0' + a);
putchar(' ');
putchar('0' + b);
if (a < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
