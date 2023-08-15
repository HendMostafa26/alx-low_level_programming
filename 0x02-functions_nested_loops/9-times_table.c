#include"main.h"
/**
 * times_table - Function to print all time tables
 * Return: 0 and 1
 */
void times_table(void)
{
  int a, b, c;
  for (a = 0; a <= 9; a++)
    {
      for (b = 0; b <= 9; b++)
	{
	  c = a * b;
	  _putchar(',');
	  _putchar(' ');
      _putchar('0' + c);
    }
    }
  _putchar('\n');
}
  
