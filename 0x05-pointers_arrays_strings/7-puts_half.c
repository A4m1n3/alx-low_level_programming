#include <unistd.h>
#include "main.h"

/**
 * puts_half -  changes value of pointers
 * @*str : character
 * @str : idem
 * return : void
 */
void puts_half(char *str)
{
	int start;
	int i = 0;
	int j;

	while (*(str + i) != '\0')
		i++;

	if (i % 2 == 0)
	{
		start = i / 2;
		for (j = start; j < i; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		start = (i - 1) / 2;
		for (j = start+1; j < i; j++)
		{
			_putchar(*(str + j));
		}
	}

	for (j = start+1; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
