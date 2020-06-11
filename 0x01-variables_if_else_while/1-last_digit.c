#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point for function
 *
 * Description: decides if a random number is odd or even
 *
 * Return: always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
		printf("and is greater than 5\n");
	else if (x == 0)
		printf("and is 0\n");
	else if (x < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
