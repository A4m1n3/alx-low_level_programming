#include "main.h"

/**
 * _isalpha - check the code.
 *
 * Return: 1 for lowcase ; 0 otherwise.
 * @c: is the char we want to check
 */
int _isalpha (int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
		return (1);
	else
		return (0);
}


