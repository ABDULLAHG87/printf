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
		{"hd", print_short_int},
		{"ld", print_long_int},
		{"b", print_bin},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"#o", print_hash_octal}
		{"lo", print_long_octal}
		{"ho", print_short_octal},
		{"x", print_hex},
		{"X", print_hex},
		{"S", print_STR},
		{"p", print_addr},
		{"R", print_rot13},
		{"r", print_rev},
		{"lX", print_long_unsigned_HEX},
		{"hX", print_short_unsigned_HEX},
		{"#x", print_hash_hex},
		{"#X", print_hash_HEX},
		{"u", print_unsigned_dec},
		{"lu", print_long_unsigned_dec},
		{"hu", print_short_unsigned_dec}
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].t != NULL; i++)
	{
		if (*(specifiers[i].t) == *format)
		{
			return (specifiers[i].f);
		}
	}

}
