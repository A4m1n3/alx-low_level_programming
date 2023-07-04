#include <unistd.h>
#include "main.h"

/**
 * _strchr - related to character
 * @s : et
 * @c : etc
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	s++;

	return (NULL);
}
