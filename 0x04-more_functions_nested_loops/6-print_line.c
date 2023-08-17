#include"main.h"
/**
 * print_line - print straight line
 * @n: Integer
 * Return: void
 */
void print_line(int n)
{
  int h;
  if (n <= 0)
    {
      _putchar('\n');
    }
  else
    {
  for (h = 0; h <= n; h++)
    {
      _putchar(95);
    }
  _putchar('\n');
}
}
       
