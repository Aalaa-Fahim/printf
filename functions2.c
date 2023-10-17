#include "main.h"

/**
 * print_number_to_right - print number shifted to right
 * @text: input
 * @p: pointer to the struct flags
 * Return: number of nums printed
 */
int print_number_to_right(char *text, flags_t *p)
{
	unsigned int z = 0, rat, rat2, i = strlen(text);
	char paddd = ' ';

	if ((p->zero) && (!(p->negative_flag)))
{
	paddd = '0';
	rat = rat2 = ((!p->unsign) && (*text == '-'));
	if ((rat == 1) && (i < (p->width)) && (paddd == '0')
	&& ((p->negative_flag) == 0))
{
	text++;
}
	else
	rat = 0;
	if (((p->positive_flag) && (!rat2)) ||
	((!p->positive_flag) && (p->space) && (!rat2)))
{
	i++;
}
	if ((rat) && (paddd == '0'))
{
	z = z + _putchar('-');
}
	if ((p->positive_flag) && (!rat2) && (paddd == '0') && (!p->unsign))
{
	z += _putchar(' ');
}
	else if ((!p->positive_flag) && (p->space)
	&& (!rat2) && (!p->unsign) && (p->zero))
{
	z = z + _putchar(' ');
{
	while (i++ < p->width)
{
	z = z + _putchar(paddd);
{
	if ((rat) && (paddd == ' '))
	z = z + _putchar('-');
}
	if ((p->positive_flag) && (!rat2) && (paddd == ' ') && (!p->unsign))

	z += _putchar('+');

	else if ((!p->positive_flag) && (p->space)
	&& (!rat2) && (!p->unsign) && (!p->zero))
{
	z = z + _putchar(' ');
}
	z += _puts(text);
}
	return (z);
}
