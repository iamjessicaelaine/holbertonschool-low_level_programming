#include "main.h"

/**
 * _isupper  -  checks for an uppercase letter
 * @c: c is character being tested
 * Return: return 0 for success
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
