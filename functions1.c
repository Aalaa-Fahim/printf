#include "main.h"

/**
 * _putchar - prints a character
 * @c: The character to be printed
 *
 * Return: 1 on Success & -1 on error
 */
int _putchar(char c)
{
	static int n;
	static char buf[1024];

	if (c == -1 || n >= 1024)
	{
		write(1, &buf, n);
		n = 0;
	}
	if (c != -1)
		buf[n++] = c;
	return (1);
}

/**
 * _puts - prints a string
 * @s: a pointer to the string to print
 *
 * Return: the number of printed characters
 */
int _puts(char *s)
{
	char *p = s;

	while (*s)
		_putchar(*s++);
	return (s - p);
}
