#include "main.h"
/**
 * _puts_recursion - a puts function in recursion;
 * @s: the input
 * Return: if ok  0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
