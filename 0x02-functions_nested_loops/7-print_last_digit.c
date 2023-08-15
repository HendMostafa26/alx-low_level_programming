#include"main.h"
int print_last_digit(int h)
{
int last_digit;
last_digit = h % 10;
_putchar ('0' + h);
return (last_digit);
}
