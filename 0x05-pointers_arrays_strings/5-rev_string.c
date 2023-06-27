#include <unistd.h>
#include "main.h"

/**
 * rev_string -  changes value of pointers
 * @*s : character
 * @s : idem
 * return : void
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end)
		end ++;
	end--;
	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	_putchar('\n');
}
