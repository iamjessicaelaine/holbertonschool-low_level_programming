#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @j: an integer we're making more powerful
 * @e: the integer with the power
 * Return: a more powerful integer
 */

int _pow_recursion(int j, int e)
{
if (e < 0)
{
return (-1);
}
else if (e != 0)
{
return (j * _pow_recursion(j, e - 1));
}
else
{
return (1);
}
}
