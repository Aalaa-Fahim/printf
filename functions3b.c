#include "main.h"

/**
 * print_octal - print octal number
 * @l: a variable argument list
 * @p: pointer to the struct flags
 * Return: number of nums printed
 */
	int print_octal(va_list l, flags_t *p)
{
	unsigned long wq;
	char *sth;
	int c = 0;

	wq = p->modifier_of_l ? va_arg(l, unsigned long)
		: (unsigned long)va_arg(l, unsigned long);
	wq = p->modifier_of_h ? (unsigned short int)va_arg(l, unsigned int)
		: (unsigned int)va_arg(l, unsigned int);
	wq = p->modifier_of_h ? (unsigned short int)va_arg(l, unsigned int)
		: (unsigned int)va_arg(l, unsigned int);
	sth = convert(1, 8, UNSIGNED, p);
	c += p->hash && wq ? (*(--sth) = '0', 1) : 0;
	p->unsign = 1;
	c = c + print_the_number(sth, p);
	return (c);
}

/**
 * print_pointer - print pointer
 * @l: a variable argument list
 * @p: pointer to the struct flags
 * Return: number of chars printed
 */
	int print_pointer(va_list l, flags_t *p)
{
	unsigned long int n = va_arg(l, unsigned long int);
	char *text;

	if (!n)
	return (_puts("nill"));
	text = convert(n, 16, UNSIGNED | LOWERCASE, p);
	*--text = 'x';
	*--text = 0;
	return (print_the_number(text, p));
}

/**
 * print_the_number - print number
 * @text: input
 * @p: pointer to the struct flags
 * Return: number of nums printed
 */
	int print_the_number(char *text, flags_t *p)
{
	unsigned int j = strlen(text);

	int negative = (!p->unsign && *text == '-');

	if (p->precision == 0 && text[0] == '0' && text[1] == '\0')
	text = "";
	if (negative)
{
	j--;
	text++;
}
	if (p->precision != UINT_MAX)
	while (j++ < p->precision)
	*--text = '0';
	if (negative)
	*--text = '-';
	if (!p->negative_flag)
	return (print_number_to_right(text, p));
	else
	return (print_number_to_left(text, p));
}
