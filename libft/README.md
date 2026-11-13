*This project has been created as part of the 42 curriculum by gtomasin.*

# libft

## Description

`libft` is a custom C library that recreates a subset of the standard C library functions, along with additional utilities commonly used in C projects. The main goal of the project is to deepen understanding of memory management, string handling, dynamic allocation, and low-level C programming while building a reusable library that can be linked in future projects.

This library includes functions for:

- string and memory manipulation
- character classification and conversion
- integer-to-string conversion and parsing
- dynamic memory allocation and safe allocation wrappers
- file descriptor output helpers
- linked-list data structure utilities

The implementation follows the constraints of the 42 curriculum: each function must be written from scratch, without relying on external library functions that are not explicitly allowed, and the code must respect strict coding standards such as `-Wall -Wextra -Werror`.

## Detailed library description

The library is organized into several groups of functions, each designed to mimic common C programming patterns and facilitate the creation of robust programs.

### 1. Character checks and conversions

These functions work with single characters and are used to classify or convert ASCII values:

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

They are useful when validating user input, processing text, or implementing parsers.

### 2. Memory management

The memory functions provide the building blocks for copying, moving, setting, comparing, and searching memory blocks:

- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_calloc`

These functions are essential for safely initializing memory, copying buffers, and handling data structures without memory corruption.

### 3. String manipulation

This part covers the most common operations used when working with C strings:

- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
- `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_strmapi`, `ft_striteri`

These functions handle string length, search, concatenation, trimming, splitting, and transformations in a reusable way.

### 4. Numeric conversion and parsing

The library includes routines for converting between integers and strings:

- `ft_atoi`
- `ft_itoa`

These functions are especially useful in programs that read user input, parse numeric data, or format values for output.

### 5. File descriptor output

The project also includes helpers to write strings and numbers directly to a file descriptor:

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

This makes the library convenient for writing to files, sockets, or standard streams in a controlled way.

### 6. Linked list utilities

A custom linked-list implementation is included to practice dynamic structures and memory ownership:

- `t_list` structure
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

These functions allow creation and manipulation of chained data structures and are a foundational concept in C memory-safe programming.

## Instructions

### Compilation

From the project root, run:

```bash
make
```

This builds the archive file `libft.a`.

### Cleaning generated files

To remove object files:

```bash
make clean
```

To remove object files and the compiled library:

```bash
make fclean
```

To rebuild everything from scratch:

```bash
make re
```

### Using the library in a C project

After compilation, include the header in your source file:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
gcc your_program.c -L. -lft -I. -o your_program
```

This links the static library `libft.a` to your executable.

## Resources

Classic references related to this topic:

- The GNU C Library manual: https://www.gnu.org/software/libc/manual/
- C Standard Library documentation: https://en.cppreference.com/w/c
- The 42 project subject (project-specific requirements and constraints)
- Articles and tutorials on memory management, strings, and linked lists in C

AI usage:

AI tools were used mainly to assist with:

- checking edge cases and reasoning around function behavior
- validating the correctness of implementations for parsing and string manipulation functions
- drafting the README structure and improving clarity for project documentation

The core implementation and logic remain original work produced for this project, with AI used as a support tool for review, explanation, and documentation rather than as a replacement for the actual coding process.

## Summary

This project builds a reusable C library that reproduces essential standard library behavior and introduces linked-list utilities, with a strong emphasis on correctness, portability, and clean C coding practices. It is a foundational exercise in understanding memory, strings, and data structures at a low level.
