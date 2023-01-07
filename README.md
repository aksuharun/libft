# Libft


A C library that includes some functions from the stdlib.h library, as well as additional functions that are thought to be useful for everyday programming tasks. This library will be a useful resource for programmers who are new to the C language or more experienced.




## Contents


**The library consists of the following files:**

* libft.h
* ft_isprint.c
* ft_putendl_fd.c
* ft_strlcat.c
* ft_strtrim.c
* ft_atoi.c
* ft_itoa.c
* ft_putnbr_fd.c
* ft_strlcpy.c
* ft_substr.c
* ft_bzero.c
* ft_memchr.c
* ft_putstr_fd.c
* ft_strlen.c
* ft_tolower.c
* ft_calloc.c
* ft_memcmp.c
* ft_split.c
* ft_strmapi.c
* ft_toupper.c
* ft_isalnum.c
* ft_memcpy.c
* ft_strchr.c
* ft_strncmp.c
* ft_isalpha.c
* ft_memmove.c
* ft_strdup.c
* ft_strnstr.c
* ft_isascii.c
* ft_memset.c
* ft_striteri.c
* ft_strrchr.c
* ft_isdigit.c
* ft_putchar_fd.c
* ft_strjoin.c
* ft_strrchar.c

## Compiling  

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

## Description of Funtions  

**ft_isprint:** This function checks if a character is printable. It returns 1 if the character is printable, and 0 if it is not.

**ft_putendl_fd:** This function outputs a string to the specified file descriptor, followed by a newline character.

**ft_strlcat:** This function concatenates two strings and returns the resulting string. It is similar to strcat, but with the added safety of specifying a maximum size for the destination string.

**ft_strtrim:** This function removes leading and trailing whitespace characters from a string and returns the resulting string.

**ft_atoi:** This function converts a string to an integer.

**ft_itoa:** This function converts an integer to a string.

**ft_putnbr_fd:** This function outputs an integer to the specified file descriptor.

**ft_strlcpy:** This function copies a string and returns the resulting string. It is similar to strcpy, but with the added safety of specifying a maximum size for the destination string.

**ft_substr:** This function extracts a substring from a string and returns the resulting string.

**ft_bzero:** This function sets all the bytes in a block of memory to zero.

**ft_memchr:** This function searches for a character in a block of memory and returns a pointer to the first occurrence of the character.

**ft_putstr_fd:** This function outputs a string to the specified file descriptor.

**ft_strlen:** This function returns the length of a string.

**ft_tolower:** This function converts a character to lowercase.

**ft_calloc:** This function allocates memory for an array of elements and initializes the memory to zero.

**ft_memcmp:** This function compares two blocks of memory and returns an integer indicating their relative order.

**ft_split:** This function splits a string into an array of substrings using the specified delimiter character.

**ft_strmapi:** This function applies a function to each character of a string and returns the resulting string.

**ft_toupper:** This function converts a character to uppercase.

**ft_isalnum:** This function checks if a character is alphanumeric (i.e. a letter or a digit). It returns 1 if the character is alphanumeric, and 0 if it is not.

**ft_memcpy:** This function copies a block of memory and returns a pointer to the destination block.

**ft_strchr:** This function searches for a character in a string and returns a pointer to the first occurrence of the character.

**ft_strncmp:** This function compares two strings and returns an integer indicating their relative order. It only compares the first n characters of the strings.

**ft_isalpha:** This function checks if a character is a letter. It returns 1 if the character is a letter, and 0 if it is not.

**ft_memmove:** This function copies a block of memory to a destination block, even if the blocks overlap.

**ft_strdup:** This function duplicates a string and returns a pointer to the new string.

**ft_strnstr:** This function searches for a substring within a string and returns a pointer to the first occurrence of the substring. It only searches for the substring within the first "len" characters of the string. If the substring is not found, it returns NULL. This function is case sensitive.

**ft_isascii:** This function checks if a character is an ASCII character, meaning that it is a 7-bit unsigned integer between 0 and 127. It returns 1 if the character is ASCII, and 0 if it is not.

**ft_memset:** This function fills the first n bytes of the memory area pointed to by s with the constant byte c. It returns a pointer to the memory area s.

**ft_striteri:** This function applies the function f to each character of the string passed as argument, and its index as first argument. Each character is passed by address to f to be modified if necessary.

**ft_strrchr:** This function locates the last occurrence of c in the string s. It returns a pointer to the located character, or NULL if the character is not found.

**ft_isdigit:** This function checks if a character is a decimal digit. It returns 1 if the character is a digit, and 0 if it is not.

**ft_putchar_fd:** This function writes a character to a file descriptor. It takes the character to be written and the file descriptor as arguments.

**ft_strjoin:** This function allocates and returns a new string, which is the result of the concatenation of s1 and s2.

**ft_strrchar:** This function is similar to ft_strrchr, but it returns the index of the character rather than a pointer to it. If the character is not found, it returns -1.

## Contact

If you encounter any errors or have suggestions for the library, please let me know.  
**E-mail:** <harun16aksu@gmail.com> 
