#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-Entry point
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
