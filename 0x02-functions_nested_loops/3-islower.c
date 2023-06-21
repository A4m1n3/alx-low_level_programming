#include "main.h"

/**
 * _islower - check the code.
 *
 * Return: 1 for lowcase ; 0 otherwise.
 * The parameter / variable 'c' is the char we want to check
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


