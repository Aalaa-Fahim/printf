#include "main.h"

/**
 * get_flags - check existed flags in the format string
 * @c: a character holds the flag specifier
 * @p: pointer to the struct flags
 *
 * Return: 1 if a flag has been turned on, otherwise 0
 */
int get_flags(char c, flags_t *p)
{
	int i = 0;

	switch (c)
	{
		case '+':
			p->plus = 1;
			i = 1;
			break;
		case ' ':
			p->space = 1;
			i = 1;
			break;
		case '#':
			p->hash = 1;
			i = 1;
			break;
		case '-':
			p->minus = 1;
			i = 1;
			break;
		case '0':
			p->zero = 1;
			i = 1;
			break;
	}
	return (i);
}
