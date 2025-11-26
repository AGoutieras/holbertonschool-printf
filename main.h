#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct specifier
{
    char symbol;
    int (*func)(va_list);
} specifier_t;


/* main printf function */
int _printf(const char *format, ...);

/* function to print characters */
int print_char(va_list args);

/* function to print strings */
int print_string(va_list args);

/* function to print the percent symbol */
int print_percent(va_list args);

/* function to print integers */
int print_int(va_list args);

/* function to print numbers */
int print_number(int n);

#endif
