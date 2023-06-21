#include "main.h"

/**
 * print_sign - check the code.
 *
 * Return: 1 if >0 ; 0 otherwise.
 * @n: is the input we want to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
