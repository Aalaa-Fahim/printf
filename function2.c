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
	int d = count_digits(n);

	if (p->space == 1 && p->plus == 0 && n >= 0)
		d += _putchar(' ');
	if (p->plus == 1 && n >= 0)
		d += _putchar('+');
	if (n <= 0)
		d++;
	print_num(n);
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
	char *str = convert(ui, 10, 0);

	(void)p;
	return (_puts(str));
}

/**
 * print_num - loops through an integer and prints all its digits
 * @n: integer to be printed
 */
void print_num(int n)
{
	unsigned int n0;

	if (n < 0)
	{
		_putchar('-');
		n0 = -n;
	}
	else
		n0 = n;

	if (n0 / 10)
		print_num(n0 / 10);
	_putchar((n0 % 10) + '0');
}

/**
 * count_digits - returns the number of digits in an integer
 * @n: integer to be evaluated
 *
 * Return: the number of digits
 */
int count_digits(int n1)
{
	unsigned int u, d = 0;

	if (n1 < 0)
		u = n1 * -1;
	else
		u = n1;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
