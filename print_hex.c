#include "main.h"
/**
 * print_hex - prints an unsigned hexadecimal
 * @args: arguments
 *
 * prints an hexadecimal number from an int by continously dividing it by 16
 * then storing it in an array, and putting the remainder as 0-9 or A-F
 *
 * Return: count
 */
int print_hex(va_list args)
{
	unsigned int p, hex[100];
	int r;

	/* va_arg calls the argument provided and passes it as unsigned int */
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (p = 0; num != 0; p++)
	{
		hex[p] = num % 16;
		num /= 16;
	}

	/* Prints the hex array */
	for (r = p - 1; r >= 0; r--)
	{
		if (hex[r] < 10)
		{
			_putchar(hex[r] + '0');
		}
		else
		{
			_putchar((hex[r] % 10) + 'a');
		}
	}

	return (p);
}
