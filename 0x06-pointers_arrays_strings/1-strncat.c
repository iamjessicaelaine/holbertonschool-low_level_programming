#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: a string, the intial one
 * @dest: a string, the destinatioh one
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
  /* dest = 'hello ' and src = 'world!'; */

  char *j = dest;
  char *k = src;

  // at the end of this code what is k
  while (*k != '\0')
    k++;

  while (*j != '\0')
  {
    *k = *j;
    j++;
    k++;
  }

 dest);
}

