#include "main.h"
/**
 * check_specifiers -
 * @format
 * Return: Pointers
 */

int (*check_specifiers(const char *format))(va_list)
{
	int i;

	func_t specifiers[4] =
	{
		{"c", print_char},
		{NULL, NULL}
	};

	for (i = 0; specifiers[i].t != NULL; i++)
	{
		if (*(specifiers[i].t) == *format)
		{
			return(specifiers[i].f);
		}
	}

}
