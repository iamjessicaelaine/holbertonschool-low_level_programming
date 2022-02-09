#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: a string to be searched
 * @needle: substring to be located
 * Return: pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != *needle)
{
haystack++;
}
if (*haystack == *needle)
{
return (haystack);
}
else
{
return (NULL);
}
}
