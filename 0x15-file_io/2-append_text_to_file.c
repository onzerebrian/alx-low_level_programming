#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * append_text_to_file - appends text
 * @filename: file pointer
 * @text_content: text to be appended
 * Return: returns int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, d;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	d = open(filename, O_APPEND | O_WRONLY);
	if (d == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	if (write(d, &text_content[i], 1) == -1)
	{
		close(d);
		return (-1);
	}
	}
	close(d);
	return (1);
}
