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
	int j, start;
	int total = 0;
	char *abc = va_arg(l, char *);
	(void)p;
	while (abc[j])
{
	if ((abc[j] >= 'A' && abc[j] <= 'Z') || (abc[j] >= 'a' && abc[j] <= 'z'))
{
	start = abc[j] - 'A';
	total = total + _putchar(array[start]);

}
	else
{
	total = total + _putchar(abc[j]);
	j++;

}
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
	int length, total = 0;
	char *strng = va_arg(l, char *);
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
