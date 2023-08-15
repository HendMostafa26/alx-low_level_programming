#include"main.h"
void print_times_table(int n)
{
  int a, b, c, d, e;
  if(n <= 15 && n >= 0)
    {
      for (a = 0; a <= 15; a++)
	{
	  for (b = 0; b <= 15; b++)
	    {
	      c = a * b;
	      if (c > 15)
		{
		  d = c % 10;
		  e = (c - d) / 10;
		  _putchar(',');
		  _putchar(' ');
		  _putchar('0' + e);
		  _putchar('0' + d);
		}
	      else
		{
		  if (b != 0)
		    {
		      _putchar(',');
		      _putchar(' ');
		      _putchar(' ');
		    }
		  _putchar('0' + c);
		}
	    }
	  _putchar('\n');
	}
    }
}
	  
