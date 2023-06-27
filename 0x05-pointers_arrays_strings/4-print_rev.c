#include <unistd.h>
#include "main.h"

/**
 * print_rev -  changes value of pointers
 * @*s : character
 * @s : idem
 * return : void
 */
void print_rev(char *s)
{
	int len=0;
	int i;

	while(*(s+len) != '\0')
		len++;

	for(i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
