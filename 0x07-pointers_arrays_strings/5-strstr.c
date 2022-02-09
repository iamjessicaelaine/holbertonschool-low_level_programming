#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: a string to be searched
 * @needle: substring to be located
 * Return: pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
char *Begin = haystack;
char *pattern = needle;

while (*haystack)
{
while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (Begin);
haystack = Begin + 1;
}
return (NULL);
}
