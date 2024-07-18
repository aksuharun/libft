# libft

Libft is a custom C library developed at Ecole 42, designed to replicate various essential functions from stdlib.h and string.h. This project aims to deepen the understanding of C programming by providing custom implementations of standard library functions. Libft includes functions such as memory manipulation, string operations, and character checks, offering a robust toolkit for C developers. This foundational library not only serves as an educational tool but also provides a reliable and efficient set of utilities for more complex applications.


## Table of Contents

- [Overview](#overview)
- [Key Featutes](#key-features)
- [Included Functions](#included-functions)
- [Function Descriptions](#function-descriptions)
- [Compilation](#compilation)
- [Contact](#contact)


## Overview  

Libft is a comprehensive library that reimplements many functions from stdlib.h and string.h. It also includes additional functions that are useful for everyday programming tasks. This library is beneficial for both new and experienced C programmers.


## Key Features  

- **Memory Manipulation**: Functions for handling memory allocation, comparison, and manipulation, ensuring efficient data management.

- **String Operations**: A comprehensive suite of functions for string manipulation, including comparison, copy, concatenation, and length calculation, among others.

- **Character Checks**: Utilities for character analysis, enabling the identification of alphanumeric, numeric, and alphabetic characters, as well as case conversion.


## Included Functions  

Libft includes a variety of functions that mimic the behavior of their standard library counterparts, along with additional utilities that enhance its functionality. Some of the key functions included are:

- Memory Allocation and Manipulation: [`ft_memset`](#ft_memset), [`ft_memcpy`](#ft_memcpy), [`ft_memmove`](#ft_memmove), [`ft_memchr`](#ft_memchr), [`ft_memcmp`](#ft_memcmp), [`ft_calloc`](#ft_calloc), and [`ft_bzero`](#ft_bzero).

- String Manipulation: [`ft_strlen`](#ft_strlen), [`ft_strlcpy`](#ft_strlcpy), [`ft_strlcat`](#ft_strlcat), [`ft_strchr`](#ft_strchr), [`ft_strrchr`](#ft_strrchr), [`ft_strnstr`](#ft_strnstr), [`ft_strncmp`](#ft_strncmp), [`ft_strdup`](#ft_strdup), [`ft_substr`](#ft_substr), [`ft_strjoin`](#ft_strjoin), [`ft_strtrim`](#ft_strtrim), [`ft_split`](#ft_split), [`ft_strmapi`](#ft_strmapi), and [`ft_striteri`](#ft_striteri).

- Character Checks and Conversion: [`ft_isalpha`](#ft_isalpha), [`ft_isdigit`](#ft_isdigit), [`ft_isalnum`](#ft_isalnum), [`ft_isascii`](#ft_isascii), [`ft_isprint`](#ft_isprint), [`ft_toupper`](#ft_toupper), and [`ft_tolower`](#ft_tolower).

- Conversion Functions: [`ft_atoi`](#ft_atoi) and [`ft_itoa`](#ft_itoa).

- Output Functions: [`ft_putchar_fd`](#ft_putchar_fd), [`ft_putstr_fd`](#ft_putstr_fd), [`ft_putendl_fd`](#ft_putendl_fd), and [`ft_putnbr_fd`](#ft_putnbr_fd).


## Function Descriptions  

<a id="ft_isprint"></a>  
**ft_isprint:** Checks if a character is printable. Returns 1 if the character is printable, and 0 if it is not.

<a id="ft_putendl_fd"></a>  
**ft_putendl_fd:** Outputs a string to the specified file descriptor, followed by a newline character.

<a id="ft_strlcat"></a>  
**ft_strlcat:** Concatenates two strings and returns the resulting string. Similar to strcat, but with the added safety of specifying a maximum size for the destination string.

<a id="ft_strtrim"></a>  
**ft_strtrim:** Removes leading and trailing whitespace characters from a string and returns the new string.

<a id="ft_atoi"></a>  
**ft_atoi:** Converts a string to an integer.

<a id="ft_itoa"></a>  
**ft_itoa:** Converts an integer to a string.

<a id="ft_putnbr_fd"></a>  
**ft_putnbr_fd:** Outputs an integer to the specified file descriptor.

<a id="ft_strlcpy"></a>  
**ft_strlcpy:** Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

<a id="ft_substr"></a>  
**ft_substr:** Allocates and returns a substring from the string s.

<a id="ft_bzero"></a>  
**ft_bzero:** Writes n zeroed bytes to the string s.

<a id="ft_memchr"></a>  
**ft_memchr:** Scans the initial n bytes of the memory area pointed to by s for the first instance of c.

<a id="ft_putstr_fd"></a>  
**ft_putstr_fd:** Outputs a string to the specified file descriptor.

<a id="ft_strlen"></a>  
**ft_strlen:** Computes the length of the string s.

<a id="ft_tolower"></a>  
**ft_tolower:** Converts an uppercase letter to a lowercase letter.

<a id="ft_calloc"></a>  
**ft_calloc:** Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.

<a id="ft_memcmp"></a>  
**ft_memcmp:** Compares the first n bytes of the memory areas s1 and s2.

<a id="ft_split"></a>  
**ft_split:** Splits a string into an array of substrings based on a delimiter.

<a id="ft_strmapi"></a>  
**ft_strmapi:** Applies the function f to each character of the string s to create a new string.

<a id="ft_toupper"></a>  
**ft_toupper:** Converts a lowercase letter to an uppercase letter.

<a id="ft_isalnum"></a>  
**ft_isalnum:** Checks if a character is alphanumeric.

<a id="ft_memcpy"></a>  
**ft_memcpy:** Copies n bytes from memory area src to memory area dst.

<a id="ft_strchr"></a>  
**ft_strchr:** Locates the first occurrence of c in the string s.

<a id="ft_strncmp"></a>  
**ft_strncmp:** Compares the first n bytes of s1 and s2.

<a id="ft_isalpha"></a>  
**ft_isalpha:** Checks if a character is a letter.

<a id="ft_memmove"></a>  
**ft_memmove:** Copies n bytes from memory area src to memory area dst, ensuring that it handles overlapping memory areas correctly.

<a id="ft_strdup"></a>  
**ft_strdup:** Duplicates the string s.

<a id="ft_strnstr"></a>  
**ft_strnstr:** Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.

<a id="ft_isascii"></a>  
**ft_isascii:** Checks if a character is an ASCII character.

<a id="ft_memset"></a>  
**ft_memset:** Fills the first n bytes of the memory area pointed to by s with the constant byte c.

<a id="ft_striteri"></a>  
**ft_striteri:** Applies the function f to each character of the string s, passing its index as the first argument.

<a id="ft_strrchr"></a>  
**ft_strrchr:** Locates the last occurrence of c in the string s.

<a id="ft_isdigit"></a>  
**ft_isdigit:** Checks if a character is a decimal digit.

<a id="ft_putchar_fd"></a>  
**ft_putchar_fd:** Outputs a character to the specified file descriptor.

<a id="ft_strjoin"></a>  
**ft_strjoin:** Allocates and returns a new string, which is the result of the concatenation of s1 and s2.


## Compilation  

To compile the library, use the provided Makefile:

```
make
```
This will create the libft.a static library file.

**Cleaning**  
To clean up object files and the libft.a file, use the following command:  
```
make clean
```
**Full Clean**  
To fully clean the project, including the object files and the libft.a file, use the following command:  
```
make fclean
```
**Rebuilding**  
To fully clean and rebuild the project, use the following command:  
```
make re
```


## Contact  

If you encounter any errors or have suggestions for the library, please let me know.  

**E-mail:** <harun16aksu@gmail.com> 
