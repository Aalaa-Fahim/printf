#include "main.h"

#include "main.h"

/**
 * handle_print - selects, prints an argument based on its type
 * @ch: character that holds the conversion specifier
 *
 * Return: a pointer to the matching function
 */
int (*handle_print(char ch))(va_list, flags_t *)
{
	h print_func[] = {
	 {'c', print_char},
	 {'s', print_string},
	 {'%', print_percent}
	/**
	 * {'i', print_int},
	 * {'d', print_int},
	 * {'i', print_int},
	 * {'d', print_int},
	 * {'b', print_binary},
	 * {'S', print_non_printable},
	 * {'u', print_unsigned},
	 * {'x', print_HEXA},
	 * {'X', print_hexa},
	 * {'o', print_octal},
	 * {'R', print_rot13},
	 * {'r', print_reversed},
	 * {'p', print_pointer}
	 */
	};

	int flags = 3;

	register int i;

	for (i = 0; i < flags; i++)
		if (print_func[i].c == ch)
			return (print_func[i].p);
	return (NULL);
}
