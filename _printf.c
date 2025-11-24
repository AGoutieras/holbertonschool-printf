#include "holberton.h"

/**
 * _printf - 
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int i = 0, count = 0;

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
				_putchar('%');
				count++;
			}
			else
			{
				return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);

}
