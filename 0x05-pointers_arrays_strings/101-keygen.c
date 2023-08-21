#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point for function
 * Return: 0 or 1
 */
int main(void)
{
int i[100];
int j, k, sum;
sum = 0;
srand(time(NULL));
for (j = 0; j < 100; j++)
{
i[j] = rand() % 78;
sum = sum + (i[j] + '0');
putchar('0' + i[j]);

if ((2772 - sum) - '0' < 78)
{
k = 2772 - sum - '0';
sum = sum + k;
putchar('0' + k);
break;
}
}
return (0);
}
