#include "holberton.h"

/**
 * print_char - prints character
 * @c: character to print
 * Return: printed character
 */

int print_char (char c)

{
	return (write(1, &c, 1));
}
