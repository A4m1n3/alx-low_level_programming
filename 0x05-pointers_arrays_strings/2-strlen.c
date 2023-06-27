#include <unistd.h>
#include "main.h"

/**
 * _strlen -  changes value of pointers
 * @s : string
 * return value : voidr
 */
int _strlen(char *s)
{
	int i = 0;
	
	while (*(s+i) != '\0')
		i++;
	i++;
	return i;	
}
