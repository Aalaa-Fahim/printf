#include "main.h"
/**
 * print_number_to_left - print pointer
 * @text: input
 * @p: pointer to the struct flags
 * Return: number of nums printed
 */

int print_number_to_left(char *text, flags_t *p)
{
	 int n = 0, rat = 0, rat2 = 0, i = strlen(text);
	char paddd = '0';

	if (p->space && !p->plus && !p->zero)
	paddd = ' ';
	if (p->zero && !p->minus && !p->space)
{
	paddd = '0';
	rat = rat2 = (!p->unsign && *text == '-');
}
	if (rat && i < p->width && paddd == '0')
{
	text++;
	i--;
}
	else
	rat = 0;

	if (p->plus && !rat2 && !p->unsign)
{
	n += _putchar('+');
	i++;
}
	else if (p->space && !rat2 && !p->unsign)
{
	n += _putchar(' ');
	i++;
}
	while (i < p->width)
{
	n += _putchar(paddd);
	i++;
}
	while (*text != '\0')
{
	n += _putchar(*text);
	text++;
}
	return (n);
}
