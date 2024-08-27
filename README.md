<h1 align="center">
  🇨📚 Libft: The 42 library for C projects
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/benzThor/libft.h?color=red" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/benzThor/libft.h?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/benzThor/libft.h?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/benzThor/libft.h?color=green" />
</p>

<h3 align="center">
	<a href="#-content">Content</a>
	<span> · </span>
	<a href="#-introduction">Introduction</a>
	<span> · </span>
	<a href="#️-project-structure">Project Structure</a>
	<span> · </span>
	<a href="#-function-list">Function List</a>
	<span> · </span>
	<a href="#️-installation">Installation</a>
	<span> · </span>
	<a href="#-usage">Usage</a>
</h3>

## 📖 Content

1. [Introduction](#-introduction)
2. [Project Structure](#️-project-structure)
3. [Functions List](#-function-list)
   <details>
   <summary>Show/Hide Functions List</summary>

   - [Character Check Functions](#character-check-functions)
   - [String Functions](#string-functions)
     - [String Length and Manipulation](#string-length-and-manipulation)
     - [String Comparison and Searching](#string-comparison-and-searching)
   - [Memory Functions](#memory-functions)
   - [Conversion Functions](#conversion-functions)
   - [Output Functions](#output-functions)
   - [Linked List Functions](#linked-list-functions)
   </details>

4. [Installation](#️-installation)
5. [Usage](#-usage)
   <details>
   <summary>Show/Hide Usage</summary>

   - [General Usage](#general-usage)
   - [GCC Command Explanation](#gcc-command-explanation)
     - [Command Breakdown](#command-breakdown)
	 - [gcc](#gcc)
	 - [Flags](#flags)
	 - [Output File](#output-file)
	 - [Source Code File](#source-code-file)
	 - [Library Directories and Linking](#library-directories-and-linking)
	 - [Additional Notes](#additional-notes)
   </details>

## 🔭 Introduction

**Libft** is a custom implementation of the C Standard Library functions. This project is part of the 42 curriculum and aims to help students become familiar with basic C programming and fundamental data structures.

## 🗃️ Project Structure

The project is structured into several categories of functions:
- **Libc Functions**: Reimplementations of standard C library functions.
- **Additional Functions**: Utility functions that provide common functionality missing from the C standard library.
- **Bonus Functions**: Functions that handle linked lists.

## 📋 Function List

### Table of Functions

|     **Libc Functions**    |     **Additional Functions**     |     **Bonus Functions**     |
|:-------------------------:|:--------------------------------:|:---------------------------:|
| [ft_isalpha](ft_isalpha.c) | [ft_substr](ft_substr.c)        | [ft_lstnew](ft_lstnew.c)    |
| [ft_isdigit](ft_isdigit.c) | [ft_strjoin](ft_strjoin.c)      | [ft_lstadd_front](ft_lstadd_front.c)|
| [ft_isalnum](ft_isalnum.c) | [ft_strtrim](ft_strtrim.c)      | [ft_lstsize](ft_lstsize.c)  |
| [ft_isascii](ft_isascii.c) | [ft_split](ft_split.c)          | [ft_lstlast](ft_lstlast.c)  |
| [ft_isprint](ft_isprint.c) | [ft_itoa](ft_itoa.c)            | [ft_lstadd_back](ft_lstadd_back.c)|
| [ft_strlen](ft_strlen.c)   | [ft_strmapi](ft_strmapi.c)      | [ft_lstdelone](ft_lstdelone.c)|
| [ft_memset](ft_memset.c)   | [ft_striteri](ft_striteri.c)    | [ft_lstclear](ft_lstclear.c)|
| [ft_bzero](ft_bzero.c)     | [ft_putchar_fd](ft_putchar_fd.c)| [ft_lstiter](ft_lstiter.c)  |
| [ft_memcpy](ft_memcpy.c)   | [ft_putstr_fd](ft_putstr_fd.c)  | [ft_lstmap](ft_lstmap.c)    |
| [ft_memmove](ft_memmove.c) | [ft_putendl_fd](ft_putendl_fd.c)|
| [ft_strlcpy](ft_strlcpy.c) | [ft_putnbr_fd](ft_putnbr_fd.c)  |
| [ft_strlcat](ft_strlcat.c) |
| [ft_toupper](ft_toupper.c) |
| [ft_tolower](ft_tolower.c) |
| [ft_strchr](ft_strchr.c)   |
| [ft_strrchr](ft_strrchr.c) |
| [ft_strncmp](ft_strncmp.c) |
| [ft_memchr](ft_memchr.c)   |
| [ft_memcmp](ft_memcmp.c)   |
| [ft_strnstr](ft_strnstr.c) |
| [ft_atoi](ft_atoi.c)       |
| [ft_strdup](ft_strdup.c)   |
| [ft_calloc](ft_calloc.c)   |

### Character Check Functions

| Function Name                   | Description                                      |
|---------------------------------|--------------------------------------------------|
| [`ft_isalpha`](ft_isalpha.c)    | Checks if the character is alphabetic.          |
| [`ft_isdigit`](ft_isdigit.c)    | Checks if the character is a digit.             |
| [`ft_isalnum`](ft_isalnum.c)    | Checks if the character is alphanumeric.        |
| [`ft_isascii`](ft_isascii.c)    | Checks if the character is an ASCII value.      |
| [`ft_isprint`](ft_isprint.c)    | Checks if the character is printable.           |

### String Functions

#### String Length and Manipulation

| Function Name                   | Description                                                        |
|---------------------------------|--------------------------------------------------------------------|
| [`ft_strlen`](ft_strlen.c)      | Calculates the length of a string.                                |
| [`ft_strlcpy`](ft_strlcpy.c)    | Copies a string to a destination buffer, ensuring null-termination.|
| [`ft_strlcat`](ft_strlcat.c)    | Concatenates strings with size limit, ensuring null-termination.   |
| [`ft_substr`](ft_substr.c)      | Extracts a substring from a string.                               |
| [`ft_strjoin`](ft_strjoin.c)    | Concatenates two strings into a new string.                       |
| [`ft_strtrim`](ft_strtrim.c)    | Trims leading and trailing whitespace or specified characters.     |
| [`ft_split`](ft_split.c)        | Splits a string into an array of strings based on a delimiter.     |
| [`ft_strmapi`](ft_strmapi.c)    | Applies a function to each character of a string to create a new string. |
| [`ft_striteri`](ft_striteri.c)  | Applies a function to each character of a string, modifying it in place. |

#### String Comparison and Searching

| Function Name                   | Description                                                        |
|---------------------------------|--------------------------------------------------------------------|
| [`ft_strchr`](ft_strchr.c)      | Locates the first occurrence of a character in a string.          |
| [`ft_strrchr`](ft_strrchr.c)    | Locates the last occurrence of a character in a string.           |
| [`ft_strncmp`](ft_strncmp.c)    | Compares two strings up to n characters.                          |
| [`ft_strnstr`](ft_strnstr.c)    | Locates a substring in a string, within the first n characters.   |
| [`ft_strdup`](ft_strdup.c)      | Duplicates a string by allocating memory for the new copy.         |

### Memory Functions

| Function Name                   | Description                                                        |
|---------------------------------|--------------------------------------------------------------------|
| [`ft_memset`](ft_memset.c)      | Fills memory with a constant byte.                                |
| [`ft_bzero`](ft_bzero.c)        | Sets memory to zero.                                              |
| [`ft_memcpy`](ft_memcpy.c)      | Copies memory area.                                               |
| [`ft_memmove`](ft_memmove.c)    | Safely copies overlapping memory areas.                           |
| [`ft_memchr`](ft_memchr.c)      | Searches memory for a byte.                                       |
| [`ft_memcmp`](ft_memcmp.c)      | Compares two memory areas.                                        |
| [`ft_calloc`](ft_calloc.c)      | Allocates memory and initializes it to zero.                      |

### Conversion Functions

| Function Name                   | Description                                                        |
|---------------------------------|--------------------------------------------------------------------|
| [`ft_atoi`](ft_atoi.c)          | Converts a string to an integer.                                  |
| [`ft_itoa`](ft_itoa.c)          | Converts an integer to a string.                                  |


### Output Functions

| Function Name                   | Description                                                        |
|---------------------------------|--------------------------------------------------------------------|
| [`ft_putchar_fd`](ft_putchar_fd.c) | Outputs a character to a file descriptor.                         |
| [`ft_putstr_fd`](ft_putstr_fd.c)   | Outputs a string to a file descriptor.                            |
| [`ft_putendl_fd`](ft_putendl_fd.c) | Outputs a string to a file descriptor, followed by a newline.     |
| [`ft_putnbr_fd`](ft_putnbr_fd.c)   | Outputs an integer to a file descriptor.                          |


### Linked List Functions

| Function Name               | Description                                                        |
|-----------------------------|--------------------------------------------------------------------|
| [`ft_lstnew`](src/ft_lstnew.c)       | Creates a new list element.                                        |
| [`ft_lstadd_front`](src/ft_lstadd_front.c) | Adds an element to the beginning of the list.                       |
| [`ft_lstsize`](src/ft_lstsize.c)     | Counts the number of elements in the list.                          |
| [`ft_lstlast`](src/ft_lstlast.c)     | Returns the last element of the list.                               |
| [`ft_lstadd_back`](src/ft_lstadd_back.c) | Adds an element to the end of the list.                             |
| [`ft_lstdelone`](src/ft_lstdelone.c) | Deletes a single list element.                                      |
| [`ft_lstclear`](src/ft_lstclear.c)   | Clears the entire list.                                            |
| [`ft_lstiter`](src/ft_lstiter.c)     | Iterates over the list and applies a function to each element.      |
| [`ft_lstmap`](src/ft_lstmap.c)       | Applies a function to each element of the list and creates a new list with the results. |

## 🛠️ Installation

To install and use the `libft` library, follow these steps:

1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/BenzThor/libft.h.git
    cd libft
    ```

2. Compile the library:
    ```bash
    make
    ```

3. The above command will generate a `libft.a` file, which is a static library that you can link to your C projects.

## 💻 Usage

### General Usage

To use the `libft` library in your project, follow these steps:

1. Include the `libft.h` header in your source files:
    ```c
    #include "libft.h"
    ```

2. Link the `libft.a` library during compilation:
    ```bash
    gcc -Wall -Wextra -Werror -o your_program your_program.c -L. -lft
    ```

3. Run your program:
    ```bash
    ./your_program
    ```

### GCC Command Explanation

#### Command Breakdown

The `gcc` command is used for compiling and linking programs. Here's a breakdown of the command and its components:

##### `gcc`
The GNU Compiler Collection command for compiling and linking.

#### Flags

- **`-Wall`**: Enable all standard warnings.
- **`-Wextra`**: Enable additional warnings not covered by `-Wall`.
- **`-Werror`**: Treat all warnings as errors.

#### Output File

- **`-o your_program`**: Specifies the output file name for your compiled program.

#### Source Code File

- **`your_program.c`**: The source code file to be compiled.

#### Library Directories and Linking

- **`-L.`**: Tells the compiler to look for libraries in the current directory (denoted by `.`). This is where `libft.a` is located.
- **`-lft`**: Tells the linker to link against the `libft` library. The `-l` flag is followed by the name of the library without the `lib` prefix and the `.a` suffix. In this case, `libft.a` corresponds to `-lft`.

#### Additional Notes

- **Library Path**: If `libft.a` is located in a different directory, replace `.` in `-L.` with the path to that directory. For example, if `libft.a` is in `./lib`, you would use `-L./lib`.

- **Static vs. Dynamic Linking**: `libft.a` is a static library. This means that the library code is included directly into your executable. If you were using a dynamic library (`.so` file), the linking process would be slightly different.

- **Compilation and Linking Order**: Ensure that you include the library linking flags (`-L` and `-l`) after your source files in the `gcc` command. This ensures that the linker resolves symbols from the library correctly.


