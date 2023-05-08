#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard outpu
 * @filename: file pointer
 * @letters:  number of letters it should read and print
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, i, r;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	
	
	b = malloc(sizeof(char) * letters);
	
	if (b == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
	free(b);
	return (0);
	}

	r = read(f, b, letters);
	if (r == -1)
	{
		close(f);
		free(b);

		return (0);
	}

	for (i = 0; i < r; i++)
	{
		if (write(STDOUT_FILENO, &b[i], 1) == -1)
		{
			close(f);
			free(b);
			return (0);
		}

	}
	close(f);
	free(b);
	return (r);
}
