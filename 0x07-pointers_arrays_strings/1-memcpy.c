#include <unistd.h>
#include "main.h"

/**
 * _memcpy - copies memory data
 * @dest : et
 * @src : etc
 * @n : a number
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (ptr);
}
