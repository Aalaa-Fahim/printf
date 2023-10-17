#include "main.h"

/**
 * handle_print - selects, prints an argument based on its type
 * @c: character that holds the conversion specifier
 *
 * Return: a pointer to the matching function
 */
int (*handle_print(char c))(va_list, flags_t *)
{
	h print_func[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'i', print_int},
	{'d', print_int},
	{'u', print_unsigned},
	{'x', print_HEXA},
	{'X', print_hexa},
	{'b', print_binary},
	{'o', print_octal},
	{'R', print_rot13},
	{'r', print_reversed},
	{'S', print_non_printable},
	{'p', print_pointer},
	{NULL, NULL}
	};
	int flags = 15, i;

	for (i = 0; i < flags; i++)
		if (print_func[i].c == c)
			return (print_func[i].p);
	return (NULL);
}
