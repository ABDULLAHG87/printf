#include "main.h"
/**
 * _printf - a function that produces output according to a format and argument
 * @format: string containing the regular chars and format specifiers to print
 *
 * Return: the total number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);
	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			value = _putchar(format[i]);
			count += value;
			continue;
		}
		if (format[i] == '%')
		{
      			f = check_specifiers(&format[i]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				continue;

			}
			/*if (format[i + 1] == '\0')
			{
				break;
				}*/
			/*if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				count += value;
				i++;
				continue;
				}*/
		}

	}
va_end(args);
return(count);
}
