#include "main.h"

/**
 * count_digits - returns the number of digits in an integer
 * @n: integer to be evaluated
 *
 * Return: the number of digits
 */
int count_digits(int n)
{
	unsigned int u, d = 0;

	if (n < 0)
		u = n * -1;
	else
		u = n;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * print_binary - prints a binary
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of nums printed
 */
int print_binary(va_list l, flags_t *p);
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert(n, 2, 0);

	(void)p;
	return (_puts(str));
}

/**
 * print_non_printable - prints non printable characters
 * @l: a variable argument list
 * @p: pointer to the struct flags
 *
 * Return: number of nums printed
 */
int print_non_printable(va_list l, flags_t *p)
{
	int i, c = 0;
	char *hex;
	char *s = va_arg(l, char *);

	(void)p;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			c += 2;
			hex = convert(s[i], 16, 0);
			if (!hex[1])
				c += _putchar('0');
			c += _puts(hex);
		}
		else
			c += _putchar(s[i]);
	}
	return (c);
}
