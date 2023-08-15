#include"main.h"
/**
 * _islower - Function used to see if it is lower or not
 * Return: 0 is success and 1 is failure
 * c: Letter
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
