#include "main.h"
#include <stdlib.h>


int print_str(va_list args)
{
	int i;
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
		return -1;
	}
	else if (*s == '\0')
	{
		return (-1);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
