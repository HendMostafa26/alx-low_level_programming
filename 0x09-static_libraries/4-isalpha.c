#include"main.h"
/**
 * _isalpha - Function to get lower and uppercases of letters
 * @c: Character
 * Return: 1 is success and 0 is failure
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
