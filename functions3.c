#include "main.h"

/**
 * print_hexa - print hexadicmal number
 * @l: a variable argument list
 * @p: pointer to the struct flags
 * Return: number of chars printed
 */

int print_hexa(va_list l, flags_t *p)
{
	unsigned long wq;
	int c = 0;
	char *sth;

	wq = p->modifier_of_l ? (unsigned long)va_arg(l, unsigned long)
	: p->modifier_of_h ? (unsigned short int)va_arg(l, unsigned int)
	: (unsigned int)va_arg(l, unsigned int);
	sth = convert(1, 16, UNSIGNED | LOWERCASE, p);
	if (p->flag_of_hashtag && wq)
	{
	*--sth = 'x';
	*--sth = '0';
}
	p->unsign = 1;
	c += print_the_number(sth, p);
	return (c);
}

/**
 * print_HEXA - print hexadicmal number
 * @l: a variable argument list
 * @p: pointer to the struct flags
 * Return: number of nums printed
 */

int print_HEXA(va_list l, flags_t *p)
{
	unsigned long wq;
	int c = 0;
	char *sth;

	wq = p->modifier_of_l ? (unsigned long)va_arg(l, unsigned long)
	: p->modifier_of_h ? (unsigned short int)va_arg(l, unsigned int)
	: (unsigned int)va_arg(l, unsigned int);
	sth = convert(1, 16, UNSIGNED | LOWERCASE, p);
	if (p->flag_of_hashtag && wq)
{
	*--sth = 'X';
	*--sth = '0';
}
	p->unsign = 1;
	c += print_the_number(sth, p);
	return (c);
}
