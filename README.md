# C - printf

## Objectifs

The objectif was to code a part of printf and add a few more features, in C.

Our \_printf handle :
1. Flag characters
	- \#
	- 0
	- \-
	- ' '
	- \+
2. Field width
3. Precision
4. Length modifier
	- h
	- l
5. Conversion specifiers
	- d,i
	- b, o, u, x, X
	- c
	- s
	- p
	- S
	- r
	- R

If you want more details on our printf you can check the man: man ./man\_3\_printf


## Conditions of developpemtent

This \_printf has been code from the 23/10/2020 to 27/10/2020 by 2 wonderful people.
Everything was done remotely.


## How to use it

Clone this repository.

\#include "holberton.h"

You can compile with:
```
gcc -Wall -pedantic -Werror -Wextra \*.c
```
or
```
gcc -Wall -pedantic -Werror -Wextra _convert_base.c _flags.c _getprintfunc.c _parse.c _print_base.c _printf.c _print_number.c _putchar.c _putstr.c _putstr_x.c YOUR_MAIN.c
```


## Author

Matt Scetbun *a.k.a* [@matt969696](https://github.com/matt969696 "The best bro for coding a project <3").

Gautier Chuinard *a.k.a* [@gchuinard](https://github.com/gchuinard "Just me :D")>.
