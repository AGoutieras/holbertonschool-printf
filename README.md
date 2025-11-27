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

The code is tested and compiled on **Ubuntu 20.04 LTS** using:

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
    return (0);
}
```
```
Output:
Hello, Alexis! You are 42 years old.
```

#### Testing

The project includes a comprehensive test suite located in the tests/ directory.
To run basic tests:
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format _printf.c printf_helpers main.c -o _printf
./_printf
```
#### Memory leak checking with Valgrind
```
valgrind --leak-check=full --show-leak-kinds=all ./_printf
```
All tests pass with no memory leaks and no errors on Valgrind.

Example valgrind result:
```
==11440== HEAP SUMMARY:
==11440==     in use at exit: 0 bytes in 0 blocks
==11440==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==11440== 
==11440== All heap blocks were freed -- no leaks are possible
```

#### File Structure

**_printf.c** - Main function and dispatcher\
**printf_helpers.c** - Helper functions\
**man_3_printf** - Custom man page\
**main.h** - Header file with prototypes and struct definitions

#### Flowchart
![Flowchart of the _printf function](https://i.imgur.com/Bj8sd5h.png)

### Authors

#### Anthony Goutieras  & Anil Aker
