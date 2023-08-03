#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: The string to be printed.
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}

