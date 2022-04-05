#include "main.h"

int _strlen(char *s);

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_cont: null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_cont)
{
	int filedescriptor; /* return value of open */
	int wrote; /* to hold return of write */

	if (filename == NULL)
	{
		return (-1);
	}
	filedescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			      S_IWUSR);
	if (filedescriptor == -1)
	{
		return (-1);
	}
	if (text_cont != NULL)
	{
		wrote = write(filedescriptor, text_cont, _strlen(text_cont));
		if (wrote == -1) /* write failed */
		{
			return (-1);
		}
	}
	close(filedescriptor);
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
