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
	ssize_t actualread; /* actual number of letters read */
	ssize_t actualwrite; /* actual number of letters written */
	void *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(filedescriptor);
		return (0);
	}
	actualread = read(filedescriptor, buffer, letters);
	close(filedescriptor);
	if (actualread == -1)
	{
		free(buffer);
		return (0);
	}
	actualwrite = write(STDOUT_FILENO, buffer, actualread);
	if (actualread != actualwrite)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (actualwrite);
}
