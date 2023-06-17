#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
3	int n;
	int ldig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldig = n % 10;
	if(ldig>5) printf("Last digit of %d is %d and is greater than 5",n,ldig);
	else if(ldig==0) printf("Last digit of %d is %d and is 0";n,ldig);
	else printf("Last digit of %d is %d and is less than 6 and not 0";n,ldig);

	return (0);
}
