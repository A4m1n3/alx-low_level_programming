#include <unistd.h>
#include "main.h"

/**
 * rev_string -  changes value of pointers
 * @*s : character
 * @s : idem
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
}
