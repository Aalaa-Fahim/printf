#include "main.h"

/**
 * print_rot13 - prints the rotational of string
 * @l: list of arguments
 * @p: pointer
 * Return: the printed chars
 */

	int print_rot13(va_list l, flags_t *p)
{
	char array[] = "NOPQRSTUWXYZABCDEFHGIJKLM  nopqrsuexyzabcdefghijklm";
	int i, j, total = 0;
	char *s = va_arg(l, char *);
	(void)p;

	for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; array[j] != '\0'; j++)
{
	if (s[i] == array[j])
{
	total += _putchar(array[j + 13]);
	break;
}
	else if (s[i] == array[j + 13])
{
	total += _putchar(array[j]);
	break;
}
}
	if (array[j] == '\0')
	total += _putchar(s[i]);
}
	return (total);
}

/**
 * print_reversed - print reversed string
 * @l: list of arguments
 * @p: pointer
 * Return: the printed chars
 */

	int print_reversed(va_list l, flags_t *p)
{
	int total = 0;
	char *strng = va_arg(l, char *);
	int length;
	(void)p;
	if (strng)
{
	length = 0;
	while (*strng)
{
	length++;
	strng++;

}
	strng--;
	while (length > 0)
{
	length--;
	strng--;

}
	total = total + _putchar(*strng);
}
	return (total);
}
