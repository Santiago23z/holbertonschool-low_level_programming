#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        if (n > 0)
		printf("%zu is positive\n", n);
        else if (n < 0)
		printf("%zu is negative\n", n);
	else 
		printf("%zu is zero\n", n);
	return (0);
}
