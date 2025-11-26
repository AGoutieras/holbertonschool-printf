#include "main.h"

/**
 * print_char - prints character
 * @c: character to print
 * Return: printed character
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}
