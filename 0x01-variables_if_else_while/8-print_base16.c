#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char alphanum;

        for (alphanum = '0'; alphanum <= '9'; alphanum++) {
		        putchar(alphanum);
			    }

	    for (alphanum = 'a'; alphanum <= 'f'; alphanum++) {
		            putchar(alphanum);
			        }

	        putchar('\n');
	return (0);
}
