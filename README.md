<p align="center">
  <img src="https://github.com/jotavare/libft/blob/master/subject/42_libft_banner.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/evaluated-22%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/languages/top/jotavare/libft?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/jotavare/libft?color=%2312bab9&style=flat-square" />
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#license">License</a>
</p>

## ABOUT
The first project at 42 school, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42 school.

If you're a 42 student, it's highly recommended that you go through the process of writing your own code and testing it yourself rather than copying and pasting code that you only partially understand. If you've successfully completed your piscine, there's no reason why you couldn't tackle this project on your own! Be patient and thorough.

<a href="https://github.com/jotavare/libft/blob/master/subject/en_subject_libft.pdf">Click here</a> for the subject of this project.

## HOW TO USE
#### 1º - Clone the repository
```bash
  git clone https://github.com/jotavare/libft.git
```
#### 2º - Enter the project folder and run `make`
```bash
  cd libft\libft
  make
```

#### MAKEFILE RULES

`make` - Compile libft mandatory functions.

``make bonus`` - Compile libft bonus functions.

``make all`` - Compile all functions.

``make clean`` - Delete all .o (object files) files.

``make fclean`` - Delete all .o (object files) and .a (executable) files.

``make re`` - use rules `fclean` + `all`

## MANDATORY
The mandatory functions in libft include both functions from the standard C library and other functions that are useful for character, string, and memory manipulation. These 34 mandatory functions are essential to achieving a grade of 100%.

#### Functions to check and manipulate characters:

* ``ft_isalpha``
* ``ft_isdigit``
* ``ft_isalnum``
* ``ft_isascii``
* ``ft_toupper``
* ``ft_tolower``

#### Functions to manipulate strings:

* ``ft_strlen``
* ``ft_strlcpy``
* ``ft_strlcat``
* ``ft_strchr``
* ``ft_strrchr``
* ``ft_strncmp``
* ``ft_strnstr``
* ``ft_substr``
* ``ft_strjoin``
* ``ft_strtrim``
* ``ft_split``
* ``ft_strmapi``
* ``ft_striteri``

#### Functions to manipulate memory:

* ``ft_calloc``
* ``ft_memset``
* ``ft_bzero``
* ``ft_memcpy``
* ``ft_memmove``
* ``ft_memchr``
* ``ft_memcmp``
* ``ft_strdup``

#### Functions for numbers:

* ``ft_atoi``
* ``ft_itoa``

#### Functions to write to a file descriptor:

* ``ft_putchar_fd``
* ``ft_putstr_fd``
* ``ft_putendl_fd``
* ``ft_putnbr_fd``

## BONUS
The bonus functions in libft are focused on list manipulation and are worth an additional 25% towards the final grade. To achieve a grade of 125%, all 9 bonus functions and 34 mandatory functions must be completed accurately.

* ``ft_lstnew``
* ``ft_lstadd_front``
* ``ft_lstsize``
* ``ft_lstlast``
* ``ft_lstadd_back``
* ``ft_lstdelone``
* ``ft_lstclear``
* ``ft_lstiter``
* ``ft_lstmap``

## LICENSE
ADD TESTER

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/gcamerli/42unlicense">42 Unlicense</a>.
</p>
