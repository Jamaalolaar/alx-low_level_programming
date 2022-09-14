#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * min loop counts min while hour loop counts hour
 * and resets min
 * Return: 0
 */
void jack_bauer(void)
{
	int min = 0;
	int hr = 0;
	int hr_rem, min_rem;

	while (hr <= 23)
	{
		while (min <= 59)
		{
			min_rem = min % 10;
			hr_rem = hr % 10;
			_putchar(hr / 10 + '0');
			_putchar(hr_rem + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_rem + '0');
			min++;
			_putchar('\n');
		}
		hr++;
		min = 0;
	}
}
