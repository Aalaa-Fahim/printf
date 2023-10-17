#include "main.h"

/**
 * _printf - a custom printf to print anything
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int c = 0;
	int (*fp)(va_list, flags_t *);
	char *pointer;
	va_list args;
	flags_t flags = {0, 0, 0, 0, 0, 0, 0, 0, 0};

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (pointer = format; *pointer; pointer++)
	{
		if (*pointer == '%')
		{
			pointer++;
			if (*pointer == '%')
			{
				c += _putchar('%');
				continue;
			}
			while (get_flags(*pointer, &flags))
				pointer++;
			fp = handle_print(*pointer);
			c += (fp) ? fp(arguments, &flags) : _printf("%%%c", *pointer);
		} else
			c += _putchar(*pointer);
	}
	_putchar(-1);
	va_end(args);
	return (c);
}
