#include "main.h"

/**
 * check_specifiers - function that checks for custom conversion specifier
 * @format: format string
 * Return: Pointers
 */
int (*check_specifiers(const char *format))(va_list)
{
	int i;
	/* fns is a struct array containing the specifier and its function */
	func_t specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsigned_int},
		{"o", print_octal},
<<<<<<< HEAD
		{"#o", print_hash_octal},
		{"lo", print_long_octal},
		{"ho", print_short_octal},
=======
>>>>>>> 904eab19f9a75b87b916fcfdc44d655f6c69fd0e
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
