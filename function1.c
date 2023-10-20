#include "main.h"

/**
 * print_char - prints a character
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of chars printed
 */
int print_char(va_list l, flags_t *p)
{
	_putchar(va_arg(l, int));
	return (1);
}

/**
 * print_string - prints a string through loops
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of chars printed
 */
int print_string(va_list l, flags_t *p)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_percent - prints a percent sign
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of chars printed
*/
int print_percent(va_list l, flags_t *p)
{
	return (_putchar('%'));
}
