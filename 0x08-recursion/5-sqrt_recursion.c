#include "main.h"

int helper_recursive_function(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_recursive_function(n, 0));
}

/**
 * helper_recursive_function - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: the possible natural sqrt
 *
 * Return: the resulting square root
 */
int helper_recursive_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else 
		return (helper_recursive_function(n, i + 1));
}
