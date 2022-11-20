#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - ...
 * @format: Input String
 * @...: Arguments
 * Return: int
 */

int _formatspec(va_list args, const char *str);

int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	int i = 0;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}

	for (str = format; *str != '\0'; str++)
	{
		if (*str != '%')
		{
			_putchar(*str);
			i++;
			continue;
		}
		count = i;
		if (*str == '%')
		{
			str++;
			_formatspec(args, str);
		}
	}
	va_end(args);
	return (count);
}

/**
 * _formatspec - ...
 * @str: String
 * Return: int
 */

int _formatspec(va_list args, const char *str)
{
	if (*str == 'c')
	{
		int c = va_arg(args, int);

		_putchar(c);
	}
	else if (*str == 's')
	{
		char *s = va_arg(args, char *);

		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
	}
	else if (*str == '%')
	{
		_putchar(37);
	}
	return (0);
}
