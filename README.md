# Libft

Libft is a custom implementation of standard C library functions. This project is an essential part of the curriculum at 42 Berlin, designed to help students deepen their understanding of C programming by recreating essential C library functions from scratch.

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)
- [Compilation](#compilation)
- [Usage](#usage)
- [Project Structure](#project-structure)
  
## Overview

Libft provides a set of C functions that replicate and expand upon standard C library functions, such as memory manipulation, string operations, and more. It is a foundational library for further projects at 42.

## Functions

The library includes implementations of functions grouped by functionality:

### Memory Functions
- `ft_memset`
- `ft_memcpy`
- `ft_memmove`
- `ft_bzero`
- `ft_memccpy`
- `ft_memcmp`
- `ft_memchr`

### String Functions
- `ft_strlen`
- `ft_strcpy`
- `ft_strncpy`
- `ft_strcat`
- `ft_strncat`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`

### Utility Functions
- `ft_atoi`
- `ft_itoa`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

For a complete list of all implemented functions, refer to the source files in the `/src` directory.

## Compilation

To compile the library, use the following command:

```bash
make
```
This will generate the libft.a static library file, which can be linked with other C programs.

### Usage

Once compiled, you can link the libft.a library with your programs as follows:

```bash
gcc -Wall -Wextra -Werror -L. -lft your_program.c
```
Make sure to include the libft.h header in your C source files:

```c
#include "libft.h"
```
## Project Structure

/src: Contains all the C source files.
/includes: Contains the header file libft.h.
Makefile: Contains the rules for compiling the library.
