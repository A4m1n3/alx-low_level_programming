#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main() {

	int i;
	
	putchar('0');
	for (int i = 1; i < 10; i++)
	{
		putchar(', ');
		putchar(i + '0');
	}

	putchar('\n');

	return 0;
}
