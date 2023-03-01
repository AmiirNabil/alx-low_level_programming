Pointers, Arrays and Strings

0-strcat.c
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest

1-strncat.c
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

2-strncpy.c
function that copies a string.
function should work exactly like strncpy

3-strcmp.c
compares two strings
function should work exactly like strcmp

4-rev_array.c
function that reverses the content of an array of integers.

5-string_toupper.c
function that changes all lowercase letters of a string to uppercase

6-cap_string.c
function that capitalizes all words of a string

7-leet.c
function that encodes a string into 1337.
Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
You can only use one if in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation