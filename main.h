#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct print - Struct op
 *
 * @c: the character or format specifier
 * @func: function that prints data with the specifier
 */
typedef struct print
{
	/* char *c: formats c, s, b, i, d, o, x, ... */
	char *c;
	/* A function that collects the variable list data and prints with it */
	int (*func)(va_list);
} prn;

int _putchar(char c);
int _printf(const char *format, ...);

/* returns a pointer to the function to execute using structs */
int (*get_func(const char *, int))(va_list);

/* Conversion specifier function prototypes */
int print_bin(va_list);
int print_char(va_list);
int print_number(va_list);
int print_octal(va_list);
int print_percent(va_list);
int print_str(va_list);
int print_unsigned_dec(va_list);
int print_unsigned_hex(va_list);
int print_unsigned_HEX(va_list);
int print_STR(va_list);
int print_addr(va_list);
int print_HEX(long int, unsigned int, unsigned int);
/* b, c, d & i, o, %, s, u, x, X */
#endif
