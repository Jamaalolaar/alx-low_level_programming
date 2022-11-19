#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 1;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					putchar (a + '0');
					putchar (b + '0');
					putchar (' ');
					putchar (c + '0');
					putchar (d + '0');
					if (a == 9 && b == 8)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
				d = 0;
			}
			c = a;
			b++;
			d = b + 1;
		}
		a++;
		b = 0;
		c = a;
		d = b + 1;
	}
	putchar('\n');
	return (0);
}
