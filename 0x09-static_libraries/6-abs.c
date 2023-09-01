#include"main.h"
/**
 * _abs - Absolute value for an integer
 * @h: Character
 * Return: 0 or 1
 */
int _abs(int h)
{
  int abs;
  if (h < 0)
    {
      abs = h * -1;
      return (abs);
    }
  return (h);
}
