<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_libft.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-24%20%2F%2011%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/jotavare/libft?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/jotavare/libft?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/jotavare' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-blue?style=flat-square'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#debugging">Debugging</a> •
	<a href="#contributing">Contributing</a> •
	<a href="#license">License</a>
</p>

## ABOUT
The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

If you're a 42 student, it's highly recommended that you go through the process of writing your code and testing it yourself rather than copying and pasting code that you only partially understand. If you've completed your piscine, there's no reason why you couldn't tackle this project on your own! Be patient and thorough.

> [!NOTE]
> For the rest of the projects and exams in the cursus, <a href="https://github.com/jotavare/42-common-core">click here</a>.

## HOW TO USE
#### 1º - Clone the repository
```bash
git clone git@github.com:jotavare/libft.git
```

#### 2º - Enter the project folder and run `make`
```bash
cd libft/libft
make
```

#### 3º - To use in your code, include the header
```c
#include "libft.h"
```

#### MAKEFILE RULES

`make` - Compile libft **mandatory** files.

`make bonus` - Compile libft **bonus** files.

`make all` - Same as `make`, compile libft **mandatory** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

`make so` - Build `libft.so`, a shared library, instead of the static archive. Not required by the subject.

## MANDATORY
> The mandatory functions in libft include both functions from the standard C library and other functions that are useful for character, string, and memory manipulation. These **34 mandatory functions** are essential to achieving a **grade of 100**.

#### Check and manipulate characters:
| Function | Description |
| :- | :- |
| `ft_isalpha` | Alphabetic character test. |
| `ft_isdigit` | Decimal-digit character test. |
| `ft_isalnum` | Alphanumeric character test. |
| `ft_isascii` | Test for ASCII character. |
| `ft_isprint` | Test for printable character. |
| `ft_toupper` | Lower case to upper case letter conversion. |
| `ft_tolower` | Upper case to lower case letter conversion. |

#### Manipulate strings:
| Function | Description |
| :- | :- |
| `ft_strlen`   | Find the length of the string. |
| `ft_strlcpy`  | Size-bounded string copying. |
| `ft_strlcat`  | Size-bounded string concatenation. |
| `ft_strchr`   | Locate the character in the string (first occurrence). |
| `ft_strrchr`  | Locate the character in the string (last occurrence). |
| `ft_strncmp`  | Compare strings (size-bounded). |
| `ft_strnstr`  | Locate a substring in a string (size-bounded) |
| `ft_substr`   | Extract substring from a string. |
| `ft_strjoin`  | Concatenate two strings into a new string (with malloc). |
| `ft_strtrim`  | Trim the beginning and end of the string with the specified characters. |
| `ft_split`    | Split string, with specified character as delimiter, into an array of strings. |
| `ft_strmapi`  | Create a new string by modifying the string with a specified function. |
| `ft_striteri` | Iterates through a string, enabling character and index manipulation. |

#### Manipulate memory:
| Function | Description |
| :- | :- |
| `ft_calloc`  | Memory allocation. |
| `ft_memset`  | Write a byte to a byte string. |
| `ft_bzero`   | Write zeroes to a byte string. |
| `ft_memcpy`  | Copy memory area. |
| `ft_memmove` | Copy byte string. |
| `ft_memchr`  | Locate byte in byte string. |
| `ft_memcmp`  | Compare byte string. |
| `ft_strdup`  | Save a copy of a string (with malloc). |

#### Manipulate numbers:
| Function | Description |
| :- | :- |
| `ft_atoi` | Convert the ASCII string to an integer. |
| `ft_itoa` | Convert integer to ASCII string. |

#### Write to a file descriptor:
| Function | Description |
| :- | :- |
| `ft_putchar_fd` | Output a character to the given file. |
| `ft_putstr_fd`  | Output string to the given file. |
| `ft_putendl_fd` | Output string to given file with newline. |
| `ft_putnbr_fd`  | Output integer to the given file. |

## BONUS
> The bonus functions in libft are focused on list manipulation and are worth an additional 25 towards the final grade. To achieve a **grade of 125**, **all 9 bonus functions and 34 mandatory functions** must be completed accurately.

| Function | Description |
| :- | :- |
| `ft_lstnew`       | Create new list. |
| `ft_lstadd_front` | Add a new element at the beginning of the list. |
| `ft_lstadd_back`  | Add a new element at the end of the list. |
| `ft_lstsize`      | Count elements of a list. |
| `ft_lstlast`      | Find the last element of the list. |
| `ft_lstdelone`    | Delete element from the list. |
| `ft_lstclear`     | Delete the sequence of elements of the list from a starting point. |
| `ft_lstiter`      | Apply function to the content of all list elements. |
| `ft_lstmap`       | Apply function to the content of all list elements into a new list. |

## NORMINETTE
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```

* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool to respect the code norm, made by 42. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

## DEBUGGING
> Several functions here allocate memory, so every leak and every read past the
> end of a buffer has to be found before the evaluation.

Compile with `-g` to keep the symbols the debuggers need:

```bash
cc -Wall -Wextra -Werror -g main.c libft.a -o test
```

`gdb ./test` - Step through a function and inspect state. Useful for the recursive and pointer-heavy ones, like `ft_split` and `ft_lstmap`.

`valgrind --leak-check=full ./test` - Report memory that was allocated and never freed. Everything returned by `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, `ft_itoa`, `ft_calloc`, `ft_split`, `ft_lstnew` and `ft_lstmap` is the caller's to free.

`valgrind --track-origins=yes ./test` - Trace an uninitialised value back to where it came from.

* [GDB](https://www.sourceware.org/gdb/) - The GNU debugger. `Website`
* [Valgrind](https://valgrind.org/docs/manual/quick-start.html) - Quick start guide. `Website`

## CONTRIBUTING

This repository documents work already submitted and graded, so it is not open
to changes. Feel free to fork it if any of it is useful to you.

## LICENSE

This project is available under the MIT License. For further details, please refer to the [LICENSE](https://github.com/jotavare/libft/blob/main/LICENSE) file.
