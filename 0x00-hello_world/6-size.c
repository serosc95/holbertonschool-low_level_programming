#include<stdio.h>
/**
 * main - using sizeof
 *
 * You should produce the exact same output as in the example
 *
 * Warnings are allowed
 *
 * Your program should return 0
 *
 * You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return(0);
}
