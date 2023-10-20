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
	(void)p;
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
	char *str = va_arg(l, char *);

	(void)p;

	if (!str)
		str = "(null)";
	return (_puts(str));
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
	(void)p;
	(void)l;
	return (_putchar('%'));
}
