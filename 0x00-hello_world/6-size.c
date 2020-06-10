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
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(double));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return(0);
}
