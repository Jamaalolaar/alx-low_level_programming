#include <stdio.h>

int main(void)
{
	long int a = 1, b = 1, sum, evensum = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			evensum += b;
		}
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%ld\n", evensum);
	return (0);
}
