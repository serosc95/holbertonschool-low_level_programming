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
	int i, n, m;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			for (m = 48; m < 58; m++)
			{
				if (m != n && m != i && n != i && m > n && m > i && n > i)
				{
					putchar(i);
					putchar(n);
					putchar(m);
					if (m != 57 || n != 56 || i != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
