#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

#define UNSIGNED 1
#define LOWERCASE 2

#define BUFF_SIZE 1024

/**
 * struct flags - structure contains flags
 * @plus: a flag for the '+' character
 * @space: a flag for the ' ' character
 * @hash: a flag for the '#' character
 * @minus: a flag for the '-' character
 * @zero: a flag for the '0' character
 *
 * @precision: to check precision specified
 * @width: to check width specified
 *
 * @modifier_of_h: on if it specified
 * @modifier_of_l: on if it specified
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	int minus;
	int zero;
	int precision;
	int width;
	int modifier_of_h;
	int modifier_of_l;
} flags_t;

/**
 * struct Handle - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @f: format specifier
 * @p: pointer to the correct printing function
 */
typedef struct Handle
{
	char c;
	int (*p)(va_list l, flags_t *p);
} h;

int _putchar(char c);
int _puts(char *s);

int print_the_number(char *text, flags_t *p);
int _printf(const char *format, ...);
int (*handle_print(char ch))(va_list, flags_t *);
int get_flags(char c, flags_t *p);
char *convert(long int value, int itsbase, int itsflag);
int print_char(va_list l, flags_t *p);
int print_string(va_list l, flags_t *p);
int print_percent(va_list l, flags_t *p);
int print_int(va_list l, flags_t *p);
int print_unsigned(va_list l, flags_t *p);
int print_binary(va_list l, flags_t *p);
int print_non_printable(va_list l, flags_t *p);
int print_pointer(va_list l, flags_t *p);
int print_rot13(va_list l, flags_t *p);
int print_reversed(va_list l, flags_t *p);
int print_number_to_right(char *text, flags_t *p);
int print_number_to_left(char *text, flags_t *p);
int print_hexa(va_list l, flags_t *p);
int print_HEXA(va_list l, flags_t *p);
int print_octal(va_list l, flags_t *p);

#endif
