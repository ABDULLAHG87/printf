#ifndef MAIN_H
#define MAIN_H
/* Adding Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
/* Function Prototypes */
int _printf(const char *format, ...);
int (*check_specifiers(const char*))(va_list);
int print_str(va_list);
int print_char(va_list);
int print_cent(va_list);
int _putchar(char c);
int print_int(va_list);
int print_long_int(va_list);
int print_short_int(va_list);
int print_unsigned_int(va_list);
int print_bin(va_list);
int print_long_octal(va_list);
int print_octal(va_list);
int print_hash_octal(va_list);
int print_hex(va_list);
int print_STR(va_list);
int print_HEX(long int num, unsigned int size, unsigned int type);
int print_rev(va_list);
int print_rot13(va_list);
int print_addr(va_list);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int is_printable(char c);
int append_hexa_code(char ascii_code, char buffer[], int i);
int is_digit(char c);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

/*Definition of Structure to Handle Conversion Specifiers */
/**
 * struct func - structure definition for conversion specifier
 * @t: format Specifier
 * @f: Calling Function
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif
