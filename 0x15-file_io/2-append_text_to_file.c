#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedscrptr; /* open sys call return value */
	ssize_t writereturns; /* write sys call return value */

	if (filename == NULL)
	{
		return (-1);
	}
	filedscrptr = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
	{
		if (filedscrptr == -1)
		{
			return (-1);
		}
		return (1);
	}
	writereturns = write(filedscrptr, text_content, _strlen(text_content));
	if (writereturns < 0)
	{
		return (-1);
	}
	close(filedscrptr);
	return (1);
}
/**
 * _strlen  -  returns the length of a string
 * @s: s is a string
 * Return: return length of string for success
*/

int _strlen(char *s)
{
	int purp = 0;

	while (*s != '\0')
	{
		purp++;
		s++;
	}
	return (purp);
}
