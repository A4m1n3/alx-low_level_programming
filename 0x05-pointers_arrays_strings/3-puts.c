#include <unistd.h>
#include "main.h"

/**
 * _puts -  changes value of pointers
 * @str : string
 * return : void
 */
void _puts(char *str)
{
	int i = 0;
	
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i))
		i++;
	}

	return ;
}
