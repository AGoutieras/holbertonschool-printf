![C](https://img.shields.io/badge/language-C-blue.svg)
![Holberton](https://img.shields.io/badge/school-Holberton-red.svg)

## _printf - Custom implementation of printf function

**Project realized by :**  
- [Anthony Goutieras](https://github.com/AGoutieras)  
- [Anil Aker](https://github.com/anil-akr)

This project is a custom recreation of the C standard library function `printf`.  
It was completed as part of the curriculum at **Holberton School / C28 Bordeaux**.

### Description

`_printf` mimics the behavior of the standard `printf` function. It handles formatted output conversion and printing to `stdout`.  
Supported conversion specifiers in this version:

| Specifier | Output                              |
|-----------|-------------------------------------|
| `%c`      | Character                           |
| `%s`      | String                              |
| `%d`, `%i`| Signed decimal integer              |
| `%%`      | Literal `%` character               |

### Compilation

The code is tested and compiled on **Ubuntu 22.04 LTS** using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format _printf.c
```

### Requirements

Ubuntu 22.04 LTS
gcc (GNU Compiler Collection)
Betty style compliance (betty-style.pl and betty-doc.pl)
No global variables
Maximum 5 functions per file
All standard libraries allowed except printf, puts, calloc, realloc

Usage Examples

```#include "main.h"

int main(void)
{
    _printf("Hello, %s! You are %d years old.\n", "Alexis", 42);
    _printf("Hex: %x, HEX: %X\n", 255, 255);
    _printf("Pointer: %p\n", (void*)0x7fff5fbff8ac);
    _printf("Reversed: %r\n", "Hello");
    _printf("Rot13: %R\n", "Hello World");
    _printf("%+d, % d, %#x\n", 42, -42, 255);
    return (0);
}
```
```
Output:
Hello, Alexis! You are 42 years old.
Hex: ff, HEX: FF
Pointer: 0x7fff5fbff8ac
Reversed: olleH
Rot13: Uryyb Jbeyq
+42, -42, 0xff
```

#### Testing

The project includes a comprehensive test suite located in the tests/ directory.
To run basic tests:
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c tests/*.c -o test_printf
./test_printf
```
#### Memory leak checking with Valgrind
```
Bashvalgrind --leak-check=full --show-leak-kinds=all ./test_printf
```
All tests pass with no memory leaks and no errors on Valgrind.

Example valgrind result:
```
text==12345== HEAP SUMMARY:
==12345==     in use at exit: 0 bytes in 0 blocks
==12345==   total heap usage: ... allocs, ... frees, ... bytes allocated
==12345== 
==12345== All heap blocks were freed -- no leaks are possible
```

File Structure

_printf.c - Main function and dispatcher
print_* files - Handlers for each conversion specifier
utils.c / helpers.c - Helper functions (write char, string length, etc.)
man_3_printf - Custom man page
main.h - Header file with prototypes and struct definitions

### Authors

#### Alexis Goutieras  & Anil Aker
