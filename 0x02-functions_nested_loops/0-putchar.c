#include <main.h>
/**
 * main - program that prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *ch = "_putchar";

	while(*ch)
	{
		_putchar(*ch);
		ch++;
	}
        _putchar('\n');

	return (0);
}
