#include "main.h"


/**
 * print_char - prints character
 * @args: argument list
 * Return: printed character
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}


/**
* print_int - print an integer
* @args: argument list
* Return: number printed integers
*/


int print_int(va_list args)
{
	int n = va_arg(args, int);
	return (print_number(n));
}

/**
* print_string - prints a string
* @args: argument list
* Return : number of printed characters
*/


int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int length;

	if (s == NULL)
		s = "(null)";

	length = strlen(s);
	return (write(1, s, length));

}

/**
* print_percent - prints a percent sign
* Return: number of printed characters (1)
*/

int print_percent(void)
{
	return (write(1, "%", 1));
}
