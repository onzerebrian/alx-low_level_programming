#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * create_file -  creates a file.
 * @filename: file pointer
 * @text_content: letters
 * Return: returns int
 */
int create_file(const char *filename, char *text_content)
{
	int f, x;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	f = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (f < 0)
	{
	if (errno == EEXIST)
	{
		f = open(filename, O_WRONLY | O_TRUNC);
		if (f == -1)
			return (-1);
	}
	else
		return (-1);
	}
	for (x = 0; text_content[x] != '\0'; x++)
	{
		if (write(f, &text_content[x], 1) == -1)
			return (-1);
	}
	close(f);
	return (1);
}
