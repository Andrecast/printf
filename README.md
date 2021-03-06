# _printf
-   Foundations - printf
-   By Diana Parra and Andrea Castrillón

## Overview :dart:
Using the _printf function we can write data to the standard output device (screen), you can write any combination of numeric values, single characters and character strings. The printf function transports data from memory to the screen.

### Prototype of _printf function

`int _printf(const char *format, ...);`  
Returns: the number of characters printed (excluding the null byte used to end output to strings)

## Tasks :bulb:

### Task 0

### Format Specifiers
| Function Specifier | Function name |
|--|--|
| %c | chr_print() |
| %s | str_print() |
| %% | percent_print() |

## %c 
is about being able to print the individual characters that were passed as a parameter to the function.

### Example Usage
-   `_printf("%c", 'a')`  _prints the character  `a`

## %s
is about being able to print strings, which are received as parameters to eh function.

### Example Usage

-   `_printf("%s", "Hello, world\n")`  _prints "Hello, world", followed by a new line_

## %%
is about being able to print the the char % because being the indefinifier of printf specifiers could generate conflicts at the time of printing.

### Example Usage

-   `_printf("%%")`  _prints the character  `%`_

### Task 1

### Format Specifiers
| Function Specifier | Function name |
|--|--|
| %d | int_print() |
| %i | int_print() |

## %d
With this option it is able to print the integers that can be handled in the variable

### Example Usage

-   `_printf("%d", -8087654)`  _prints -8087654_

## %i
With this option it is able to print the integers that can be handled in the variable

### Example Usage

-   `_printf("%i", 630)`  _prints 630_

## Task 2

* Manual file - [man_3_printf](https://github.com/Andrecast/printf/blob/00613597e4e52ebc337a6a772fe00f81c657f6de/man_3_printf)

## Flowcharts :pencil2:

* _printf.c and helper_printf.c 

https://drive.google.com/file/d/1hTc2UefJ6vC0fjqGmLy5DBt1ys1bKdiA/view?usp=sharing

* funcschar.c

https://drive.google.com/file/d/1a0O1rJuDjXpFQs3lKesEp8lk4nJzg4FJ/view?usp=sharing

* funcsint.c

https://drive.google.com/file/d/1MARtvRm8bNFNrIgj7DJ-N1e0BPyfDlqK/view?usp=sharing

### About :pushpin:

Created on  `Ubuntu 14.04 LTS`. Compiled with  `gcc 4.8.4`, using flags:  `-Wall -Werror -Wextra and -pedantic`

### Authors :blossom:
[GitHub_Andrecast](https://github.com/Andrecast) and
[GitHub_dianaparr](https://github.com/dianaparr)

**Project to:**
![](https://www.holbertonschool.com/holberton-logo.png)

