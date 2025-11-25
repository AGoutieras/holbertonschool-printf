#include "holberton.h"

/**
 * _printf - writes output to stdout
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			if (format[i] == 'c')
				count = count + print_char(va_arg(args, int));
			else if (format[i] == 's')
				count = count + print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				count = count + print_number(va_arg(args, int));
			else if (format[i] == '%')
			{
				print_char('%');
				count++;
			}
			else
				return (-1);
			i++;
		}
		else
		{	count = count + print_char(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
