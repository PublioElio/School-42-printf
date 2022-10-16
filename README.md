<div id="header" align="center">
  <img src="https://media.giphy.com/media/QXJd9XVrgJuDFhhcOX/giphy.gif" width="200"/>
</div>

<h1 align="center">School 42 printf()</h1>

This repository contains all files for the __printf__ project from School 42 Málaga cursus. The project consist in duplicate the [`printf()`](https://es.wikipedia.org/wiki/Printf) function, part of the `stdio.h` library.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instuctions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About
This project consists in duplicate the behavior of the C function `printf()`. It is not necessary to implement the buffer management of the original function. It must handle the following parameters:

- `char` type variables.
- `string` type variables.
- `int` type variables.
- `unsigned int` type variables.
- hexadecimal `int` type variables (uppercase and lowercase).
- `pointer` type variables.

You will find more details in the [subject of the project](https://github.com/PublioElio/School-42-printf/blob/main/printf.es.subject.pdf).

## Index
- [Structure](#structure)
- [Formats](#formats)
	- [va_list](#va_list)
	- [Returning an integer](#returning-an-integer)
- [Auxiliary functions](#auxiliary-functions)

### Structure
The main obstacles during the execution of the project have been: handling a variable number of parameters and the function `ft_printf()` returning an `int`.

#### `va_list`
To deal with the variable number of parameters entered, the macros `va_list`, `va_start`, `va_arg` and `va_end` have been used. The `ft_printf()` function calls the `ft_fotmat()` function when it finds the `%` sign among the entered parameters, then it checks the next character in the string to call one of the functions that print the different variable types. To use this macro, the libraryt `<stdarg.h>` is included in the `ft_printf.h`.

#### Returning an integer
To handle the integer returned by `ft_printf()`, a pointer is given in the format printing functions. In this way, the function handles the number of characters printed before continuing with the string sent by parameter. Example:

```
void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++; // increasing the pointer with each character printed
}
```
### Formats
The different types of variables are printed using a function for each of the formats:

* [__`ft_putchar_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_putchar_pf.c) prints `char` type variables and is called by each of the following functions to print the character strings one by one. Also, it is where the pointer returned by the `ft_printf()` function is incremented.
* [__`ft_puthex_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_puthex_pf.c) prints hexadecimal integers,  using a string included in the `ft_printf.h` library. There is one string for uppercase and one for lowercase characters.
### Auxiliary functions

