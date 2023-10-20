#include "main.h"

/**
 * convert - converts nums and base into string
 * @num: input number
 * @base: input base
 * @lowercase: a flag if hexa values need to be lowercase
 * Return: a string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *conv;
	static char buf[50];
	char *p;

	conv = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";
	p = &buf[49];
	*p = '\0';
	do {
		*--p = conv[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}
