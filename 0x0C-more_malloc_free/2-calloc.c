#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: no of bytes
 * @size: size
 * Return: pointer on complesion
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;

ptr = malloc(nmemb * size);
if (ptr == NULL || nmemb == 0 || size == 0)
{
return (NULL);
}
return (ptr);
}

