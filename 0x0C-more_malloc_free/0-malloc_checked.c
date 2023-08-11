#include<stdlib.h>
#include "main.h"
/**
* *malloc_checked – if ok returns 98
*
* @b: allocated memory
*
* Return: it returns the pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
