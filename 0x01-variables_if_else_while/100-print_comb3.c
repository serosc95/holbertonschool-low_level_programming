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
	int i, n;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n != i && i < n)
			{
				putchar(i);
				putchar(n);
				if (n != 57 || i != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
