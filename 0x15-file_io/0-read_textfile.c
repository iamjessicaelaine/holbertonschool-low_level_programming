#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: points to the text file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or returns 0 if
 * the file cannot be opened or read, if the filename is NULL, or if write fals
 * or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor; /* return value of open */
	ssize_t actualfactual; /* actual number of letters read & printed */
	ssize_t actualwrite;
	void *buffer = malloc(sizeof(letters));

	/* void *buffer = malloc(filesize); buffer arg 4 read & write */

	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}
	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
	{
		return (0);
	}
	actualfactual = read(filedescriptor, buffer, letters);
	if (actualfactual == -1)
	{
		return (0);
	}
	actualwrite = write(STDOUT_FILENO, buffer, actualfactual);
	if (actualfactual == -1)
	{
		return (0);
	}
	else
		return (actualwrite);
}
