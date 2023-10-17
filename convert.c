#include "main.h"

/**
 * convert - converts nums and base into string
 * @value: input number
 * @itsbase: input base
 * @itsflag: a flag if hexa values need to be lowercase
 * @p: pointer
 * Return: a string
 */
char *convert(long int value, int itsbase, int itsflag, flags_t *p)
{
	char sign = 0;
	static char *arr;
	unsigned long n = value;
	static char buffer[50];
	char *pointer;
	(void)p;

	sign = (value < 0 && !(itsflag & UNSIGNED)) ? '-' : 0;
	n = (value < 0 && !(itsflag & UNSIGNED)) ? -value : value;
	arr = itsflag & LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	pointer = &buffer[49];
	*pointer = '\0';
	while (n != 0)
{
	*--pointer = arr[n % itsbase];
	n /= itsbase;
}
	*(sign ? --pointer : pointer) = sign;
	return (pointer);
}
