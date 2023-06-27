#include <unistd.h>
#include "main.h"

/**
 * swap_int- changes value of pointers
 * @a : et
 * @b : etc
 * return value : void
 * @n @*n : variable to pointer
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *b;
	*b = *a;
	*a = c;
	
}
