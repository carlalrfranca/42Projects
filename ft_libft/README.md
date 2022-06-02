![(https://github.com/42Paris/minilibx-linux/actions/workflows/ci.yml/badge.svg)](https://img.shields.io/badge/norminette-100%25-green)

# Libft

The aim of this project is to recreate of the Standard C Library and some additional functions.

## Compilation

`make` to compile <br>
`make clean` to remove objects <br>
`make fclean` to remove objects and binary files <br>

## General Info

**C Library `<ctype.h>`**

<a href="https://github.com/carlarfranca/42Projects/blob/35043debad2ca6126ada470dd34fffd07fa4abff/ft_libft/Libft_Commented/ft_isalnum.c"><code>ft_isalnum</code></a> : checks whether the passed character is alphanumeric<br>
<a href="https://github.com/carlarfranca/42Projects/blob/58e1c1574f0131f28a9cf9de7ccab5d3cc01e606/ft_libft/Libft_Commented/ft_isalpha.c"><code>ft_isalpha</code></a> : checks whether the passed character is alphabetic<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_isascii.c"><code>ft_isascii</code></a> : checks whether the passed character is ASCII<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_isdigit.c"><code>ft_isdigit</code></a> : checks whether the passed character is decimal digit<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_isxdigit.c"><code>ft_isxdigit*</code></a> : checks whether the passed character is a hexadecimal digit<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_isprint.c"><code>ft_isprint</code></a> : checks whether the passed character is printable<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_tolower.c"><code>ft_tolower</code></a> : converts uppercase letters to lowercase<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_toupper.c"><code>ft_toupper</code></a> : checks whether the passed character is lowercase letter<br>

**C Library `<stdlib.h>`** 

<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_atoi.c"><code>ft_atoi</code></a> : converts the string pointed to, by the argument str to an integer (type int)<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_calloc.c"><code>ft_calloc</code></a> : allocates the requested memory and returns a pointer to it<br>

**C Library `<strings.h>`**

<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_bzero.c"><code>ft_bzero</code></a> : writes zeros to a byte string<br>
<a href="https://github.com/carlarfranca/42Projects/blob/8717f6ee7b3f62bac5b995d3cb67d444b2bf4b82/ft_libft/Libft_Commented/ft_memset.c"><code>ft_memset</code></a> : writes one byte in a bytes string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_memchr.c"><code>ft_memchr</code></a> : scan memory for a character<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_memcmp.c"><code>ft_memcmp</code></a> : compare memory areas<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_memmove.c"><code>ft_memmove</code></a> : copy byte string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_memcpy.c"><code>ft_memcpy</code></a> : copy an memory area<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_memccpy.c"><code>ft_memccpy</code></a> : copy string until found a character<br>

**C Library `<string.h>`**

<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strlen.c"><code>ft_strlen</code></a> : finds the length of a string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strchr.c"><code>ft_strchr</code></a> : searches for the first occurrence of the character c<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strrchr.c"><code>ft_strrchr</code></a> : searches for the last occurrence of the character c<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strstr.c"><code>ft_strstr*</code></a> : finds the first  occurrence of the substring in a string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strnstr.c"><code>ft_strnstr</code></a> : finds a substring in a string <br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strcmp.c"><code>ft_strcmp*</code></a> : compare strings<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strncmp.c"><code>ft_strncmp*</code></a> : compares at most the first n bytes of str1 and str2<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strncmp.c"><code>ft_strnrcmp</code></a> : compare strings reversely <br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strcpy.c"><code>ft_strcpy*</code></a> : copy a string pointed to, by src to dest<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strncpy.c"><code>ft_strncpy*</code></a> : copy a string from the string pointed to, by src to dest<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strdup.c"><code>ft_strdup</code></a> : save a copy of a string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strndup.c"><code>ft_strndup*</code></a> : save a copy of a string (with malloc, limited by length)<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strcat.c"><code>ft_strcat*</code></a> : concatenate strings<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strncat.c"><code>ft_strncat*</code></a> : concatenate strings<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strlcpy.c"><code>ft_strlcpy</code></a> : copy of string limited by length<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strlcat.c"><code>ft_strlcat</code></a> : concatenate a string limited by length<br>

**Non-standard**

<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_putchar_fd.c"><code>ft_putchar_fd</code></a> : produces a character for a specific file. <br>
<a href="https://github.com/carlarfranca/42Projects/blob/main/basecamp/c01/ft_putstr.c"><code>ft_putstr*</code></a> : output string to stdout.<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_putstr_fd.c"><code>ft_putstr_fd</code></a> : output string for a specific file<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_putendl_fd.c"><code>ft_putendl_fd</code></a> : output string for a specific file with new line<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_putnbr_fd.c"><code>ft_putnbr_fd</code></a> : output a number to a file descriptor<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_itoa.c"><code>ft_itoa</code></a> : converts a integer to ASCII string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_substr.c"><code>ft_substr</code></a> : returns a substring from a string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strtrim.c"><code>ft_strtrim</code></a> : trims the beginning and end of a string with a specific characters <br>
<a href="https://github.com/carlarfranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_split.c"><code>ft_split</code></a> : splits a string, using a char as parameter<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strmapi.c"><code>ft_strmapi</code></a> : applies a function to each character of a string<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_strjoin.c"><code>ft_strjoin</code></a> : concatenates two strings into a new string<br>

**Linked List**

<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstnew.c"><code>ft_lstnew</code></a> : creates a new list<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstsize.c"><code>ft_lstsize</code></a> : counts list elements<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstlast.c"><code>ft_lstlast</code></a> : finds the last element of the list<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstadd_back.c"><code>ft_lstadd_back</code></a> : adds a new element at the end of a list<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstadd_front.c"><code>ft_lstadd_front</code></a> : adds a new element at the beginning of a list<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstdelone.c)"><code>ft_lstdelone</code></a> : deletes an element of the list<br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstclear.c"><code>ft_lstclear</code></a> : deletes and free list. <br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstiter.c"><code>ft_lstiter</code></a> : applies a function to each element of a list <br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_libft/Libft_Commented/ft_lstmap.c"><code>ft_lstmap</code></a> : applies a function to each element of a list<br>

**Additional** 

<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_printf/libft/ft_count_unsign.c"><code>ft_count_unsign</code></a> : counts numbers of digits <br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_printf/libft/ft_itohex.c"><code>ft_itohex</code></a> : itoa function with a unsigned argument for hexadecimal <br>
<a href="https://github.com/CarlarFranca/42Projects/blob/main/ft_printf/libft/ft_putnbr_unsig.c"><code>ft_putnbr_unsig</code></a> : putnbr function with a unsigned argument <br>
<a href="https://github.com/carlarfranca/42Projects/blob/cb146a59bde13cfb0ab3e797c44126e614f0cbed/ft_libft/Libft_Commented/ft_strcmp.c"><code>ft_strcmp</code></a> : compare two strings  <br>
<a href="https://github.com/carlarfranca/42Projects/blob/83136e84bb1e48358ddab4064336bd90dd313dba/ft_libft/Libft_Commented/ft_strcpy.c"><code>ft_strcpy</code></a> : copy one string to another <br>
