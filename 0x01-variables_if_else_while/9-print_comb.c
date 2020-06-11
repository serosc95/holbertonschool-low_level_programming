#include<stdio.h>
/**
 * main - entry point for function
 *
 * Description: decides if a random number is odd or even
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
