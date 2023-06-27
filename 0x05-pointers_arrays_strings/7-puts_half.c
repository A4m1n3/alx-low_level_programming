#include <unistd.h>
#include "main.h"

/**
 * rev_string -  changes value of pointers
 * @*s : character
 * @s : idem
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
}
