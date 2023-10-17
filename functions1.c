#include "main.h"

/**
 * print_int - prints an integer
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of nums printed
 */
int print_int(va_list l, flags_t *p)
{
	int n = va_arg(l, int);
	int d = c(n);

	if (p->space == 1 && p->plus == 0 && n >= 0)
		d += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		d += _putchar('+');
	if (n <= 0)
		d++;
	print_int(n);
	return (d);
}

/**
 * print_unsigned - prints an unsigned integer
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of chars printed
 */
int print_unsigned(va_list l, flags_t *p)
{
	unsigned int ui = va_arg(l, unsigned int);
	char *str = convert(ui, 10, 0, flags_t *p);

	return (_puts(str));
}

/**
 * print_num - loops through an integer and prints all its digits
 * @n: integer to be printed
 */
void print_num(int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
		n = n;

	if (n / 10)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
