#include "main.h"

/**
 * check_specifiers - function that checks for custom conversion specifier
 * @format: format string
 * Return: Pointers
 */

int (*check_specifiers(const char *format))(va_list)
{
	int i;

	func_t specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex},
		{"S", print_STR},
		{"p", print_addr},
		{"R", print_rot13},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].t != NULL; i++)
	{
		if (*(specifiers[i].t) == *format)
		{
			return (specifiers[i].f);
		}
	}
	return (0);
}
