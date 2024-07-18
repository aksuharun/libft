libft
Libft is a custom C library developed at Ecole 42, designed to replicate various essential functions from stdlib.h and string.h. This project aims to deepen the understanding of C programming by providing custom implementations of standard library functions. Libft includes functions such as memory manipulation, string operations, and character checks, offering a robust toolkit for C developers. This foundational library not only serves as an educational tool but also provides a reliable and efficient set of utilities for more complex applications.

Table of Contents
Overview
Key Featutes
Included Functions
Function Descriptions
Compilation
Contact
Overview
Libft is a comprehensive library that reimplements many functions from stdlib.h and string.h. It also includes additional functions that are useful for everyday programming tasks. This library is beneficial for both new and experienced C programmers.

Key Features
Memory Manipulation: Functions for handling memory allocation, comparison, and manipulation, ensuring efficient data management.

String Operations: A comprehensive suite of functions for string manipulation, including comparison, copy, concatenation, and length calculation, among others.

Character Checks: Utilities for character analysis, enabling the identification of alphanumeric, numeric, and alphabetic characters, as well as case conversion.

Included Functions
Libft includes a variety of functions that mimic the behavior of their standard library counterparts, along with additional utilities that enhance its functionality. Some of the key functions included are:

Memory Allocation and Manipulation: ft_memset, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc, and ft_bzero.

String Manipulation: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strnstr, ft_strncmp, ft_strdup, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, and ft_striteri.

Character Checks and Conversion: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, and ft_tolower.

Conversion Functions: ft_atoi and ft_itoa.

Output Functions: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, and ft_putnbr_fd.

Function Descriptions

ft_isprint: Checks if a character is printable. Returns 1 if the character is printable, and 0 if it is not.


ft_putendl_fd: Outputs a string to the specified file descriptor, followed by a newline character.


ft_strlcat: Concatenates two strings and returns the resulting string. Similar to strcat, but with the added safety of specifying a maximum size for the destination string.


ft_strtrim: Removes leading and trailing whitespace characters from a string and returns the new string.


ft_atoi: Converts a string to an integer.


ft_itoa: Converts an integer to a string.


ft_putnbr_fd: Outputs an integer to the specified file descriptor.


ft_strlcpy: Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.


ft_substr: Allocates and returns a substring from the string s.


ft_bzero: Writes n zeroed bytes to the string s.


ft_memchr: Scans the initial n bytes of the memory area pointed to by s for the first instance of c.


ft_putstr_fd: Outputs a string to the specified file descriptor.


ft_strlen: Computes the length of the string s.


ft_tolower: Converts an uppercase letter to a lowercase letter.


ft_calloc: Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.


ft_memcmp: Compares the first n bytes of the memory areas s1 and s2.


ft_split: Splits a string into an array of substrings based on a delimiter.


ft_strmapi: Applies the function f to each character of the string s to create a new string.


ft_toupper: Converts a lowercase letter to an uppercase letter.


ft_isalnum: Checks if a character is alphanumeric.


ft_memcpy: Copies n bytes from memory area src to memory area dst.


ft_strchr: Locates the first occurrence of c in the string s.


ft_strncmp: Compares the first n bytes of s1 and s2.


ft_isalpha: Checks if a character is a letter.


ft_memmove: Copies n bytes from memory area src to memory area dst, ensuring that it handles overlapping memory areas correctly.


ft_strdup: Duplicates the string s.


ft_strnstr: Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.


ft_isascii: Checks if a character is an ASCII character.


ft_memset: Fills the first n bytes of the memory area pointed to by s with the constant byte c.


ft_striteri: Applies the function f to each character of the string s, passing its index as the first argument.


ft_strrchr: Locates the last occurrence of c in the string s.


ft_isdigit: Checks if a character is a decimal digit.


ft_putchar_fd: Outputs a character to the specified file descriptor.


ft_strjoin: Allocates and returns a new string, which is the result of the concatenation of s1 and s2.

Compilation
To compile the library, use the provided Makefile:

make
This will create the libft.a static library file.

Cleaning
To clean up object files and the libft.a file, use the following command:

make clean
Full Clean
To fully clean the project, including the object files and the libft.a file, use the following command:

make fclean
Rebuilding
To fully clean and rebuild the project, use the following command:

make re
Contact
If you encounter any errors or have suggestions for the library, please let me know.

E-mail: aharun16aksu@gmail.com
