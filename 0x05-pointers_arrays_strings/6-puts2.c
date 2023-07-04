#include <unistd.h>
#include "main.h"

/**
 * puts2-  changes value of pointers
 * @str : character
 * @*str : idem
 * return : void
 */
void puts2(char *str)
{
	char *start = str;
	char *end = str;

	while (*end)
		end++;
	end--;

	while (start <= end)
	{
		_putchar(*start);
		start++;
		start++;

	}
	_putchar('\n');
}
