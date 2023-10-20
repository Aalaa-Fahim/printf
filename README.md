This printf project is a collaboration between Aalaa Fahim and Ahmed Alaa, cohort 19 students of ALX Software Engineering using the Holberton School curriculum, we build a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions in manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:
int _printf(const char *format, ...)
Where format contains the string that is printed. As _printf() is a variadic function, it can receive n arguments replaced by n tags written inside the string.

The format tags prototype is the following:
%[flags][length][width]specifier
If the program runs successfully, the return value is the number of chars printed.

Examples:
1- Printing the string of chars "Hello, Holberton":

Use: _printf("Hello Hol%s.", "berton");
Output: Hello Holberton.
Printing an integer number:

Use: _printf("10 + 10 is equal to %d.", 20);
Output: 10 + 10 is equal to 20.
Printing a binary, octal and hexadecimal:

Use: _printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);
Output: 10 in binary is [1010], in octal is [12] and in hexadecimal is [A]
Printing a string codified in ROT13:

Use: _printf("Hello in ROT13 is %R", "Hello");
Output: Hello in ROT13 is Urybb
Using flags and length tags:

2- Printing the string of chars "Hello, Holberton":

Use: _printf("2 * 2 = %+d and 5 * -5 = %+i", 4, -25);
Output: 2 * 2 = +4 and 5 * -5 = -25
Printing a long integer number and short integer number:

Use: _printf("1 million as a long int is %ld, but as a short int is %hd", 1000000, 1000000);
Output: 1 million as a long int is 1000000, but as a short int is 16960
