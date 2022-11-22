#include "main.h"
/**
 * print_unsigned - prints an unsigned int.
 * @args: Variadic argument
 * Return: 0
 */

int print_unsigned_int(va_list args)
{
	unsigned int arr[100], i = 0, r, count = 0;
	int j;
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* continously divide the number by 10 and store it in arr */
	while (num != 0)
	{
		r = num % 10;
		arr[i] = r;
		i++;

		num /= 10;
	}

	/* prints the arr backwards, and returns the num of elements printed */
	for (j = i - 1; j > -1; j--, count++)
		_putchar(arr[j] + '0');

	return (count);
}
