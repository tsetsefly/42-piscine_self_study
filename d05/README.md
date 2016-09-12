# Character array manipulation

## ```char *str``` vs. ```char str[] = "xyz"``` vs. ```char *str[]```

```char *str = "xyz``` = literally a **pointer to a character** that implicitly defines a string in subsequent memory addresses. Requires null termination of array with ```\0```. Declares ```str``` as a char pointer and initializes with string literal ```"xyz"```. Cannot modify a string literal (will cause a seg-fault).

```char str[] = "xyz"``` = **declares a string** of size ```4``` **and initializes** it with ```"xyz"``` as well as a null terminator ```\0```. You can modify the contents of this string.

```char *str[]``` = **pointer to array of null-terminated strings** (made up of ```char *str```)

## ft_atoi.c

[Link to a breakdown](https://github.com/tsetsefly/Study_42_Piscine/blob/master/d05/ex02/ft_atoi.md)

## Sources
1. https://www.quora.com/What-is-the-difference-between-char*str-char*str-and-char-str
2. http://stackoverflow.com/questions/3862842/difference-between-char-str-string-and-char-str-string