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
	int i, n, m, p;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			for (m = 48; m < 58; m++)
			{
				for (p = 48; p < 58; p++)
				{
					if (i <= m && n < p)
					{
						putchar(i);
						putchar(n);
						putchar(32);
						putchar(m);
						putchar(p);
						if (n != 56 || i != 57 || m != 57 || p != 57)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
