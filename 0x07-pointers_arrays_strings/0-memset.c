#include <unistd.h>
#include "main.h"

/**
 * _memset - changes value of pointers
 * @s @*s : et
 * @b : etc
 * @n : a number
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;   
	while (n > 0) 
	{
		*ptr = b;
		ptr++;
		n--;
	}
    
    return s;
}
