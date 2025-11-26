#include "main.h"

/**
 * _printf - writes output to stdout
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	int count = 0, index, spec_index;
	specifier_t specs[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'d', print_int}, {'i', print_int}, {'\0', NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				count = count + write(1, "%", 1);
				break;
			}
			for (spec_index = 0; specs[spec_index].symbol; spec_index++)
			{
				if (format[index] == specs[spec_index].symbol)
				{
					count = count + specs[spec_index].func(args);
					break;
				}
			}
			if (specs[spec_index].symbol == '\0')
			{
				count = count + write(1, "%", 1);
				count = count + write(1, &format[index], 1);
			}
		}
		else
			count = count + write(1, &format[index], 1);
	}
	va_end(args);
	return (count);
}
