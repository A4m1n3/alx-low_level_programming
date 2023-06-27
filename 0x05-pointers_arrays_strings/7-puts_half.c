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

	while (*(str + i) != '\0')
		i++;

	if (i % 2 == 0)
		start = i / 2;
	else
		start = (i - 1) / 2;


	while (*(str + start))
	{
		_putchar(*(str + start));
		start++;
	}
	_putchar('\n');
}
