#include "main.h"

/**
 * print_number_to_right - print number shifted to right
 * @text: input
 * @p: pointer to the struct flags
 * Return: number of nums printed
 */

int print_number_to_right(char *text, flags_t *p)
{
	int j;
char paddd = ' ';
int z = 0, rat, rat2, i = strlen(text);

if (p->zero && !p->minus)
paddd = '0';
rat = rat2 = (!p->unsign) && *text == '-';
if (rat == 1 && i < p->width && !p->minus && paddd == '0')
text++;
else
rat = 0;

z += (!rat2 && p->plus) ||
(!p->plus && p->space && !rat2);
z += (rat && paddd == '0') ? _putchar('-') : 0;
z += (p->plus && !rat2 && paddd == '0' &&
(!p->unsign)) ? _putchar(' ') : 0;
if (!p->plus && p->space && !rat2 &&
!p->unsign && p->zero)
z = z + _putchar(' ');
for (j = i; j < p->width; j++)
{
z = z + _putchar(paddd);
}
z += (rat && paddd == ' ') ? _putchar('-') : 0;
z += (p->plus && !rat2 && paddd == ' ' && !p->unsign) ? _putchar('+') : 0;
if (!p->zero && p->unsign
&& !rat2 && !p->space && !p->plus)
z = z + _putchar(' ');
z = z + _puts(text);
return (z);
}
