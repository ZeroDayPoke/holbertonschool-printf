<p align="center">
  <img width="200" height="200" src="http://zerodaypoke.com/images/CSCLOGO.png">
</p>
<h1>printf From Scratch Project</h1>

<p align="center">
<a href="#synopsis">Synopsis</a> | <a href="#get_started">Get Started</a> | <a href="#how_does_it_work?">How Does it Work?</a> | <a href="#conversion_specifiers">Format Characters</a> | <a href="#file_and_function_descriptions">File and Function Descriptions</a> | <a href="#return_values">Return Values</a> | <a href="#examples">Examples</a> | <a href="#authors">Authors</a>
</p>

<h2>Synopsis</h2>

The _printf function writes output to stdout, the standard output stream, according to a specified format.
All parts of the _printf function in this repository are there to ensure that the user can print integers, characters, and strings of characters all within one function.
Note: this printf does not support length modifiers, flag characters, precision, or field width.

<h2>Get Started</h2>
In the user's terminal, in the subdirectory where the user would like to install the new repository, type:

``` 
$ git clone https://github.com/ZeroDayPoke2/holbertonschool-printf.git
``` 

<h2>How Does it Work?</h2>
<p>

![](https://github.com/ZeroDayPoke2/holbertonschool-printf/blob/main/PLD_printf.png)

</p>
  
<h2>Format Characters</h2>
<p>
There are characters which specify which conversion will be applied. These are called format characters. Format characters are utilized upon detecting a % character.
The format character is required according to data type in order for the function to properly display different inputs (char, int, and string).
</p>

``` 
c: print a single character
d: print a decimal (base 10) number
i: print an integer in base 10
s: print a string of characters
``` 

<h2>File & Function Descriptions</h2>
<p>

| Files        | Descriptions                                                                         |
| ------------ | ------------------------------------------------------------------------------------ |
| _printf.c    | Prints supported formats to standard output                                          |
| fun_defs.c   | Function defintions invoked from the p structure in main.h file                      |
| main.h       | Contains libraries, structure definitions, and prototypes                            |
| man_3_printf | Manual page                                                                          |
| writefun.c   | Group of functions called by structure functions or associated structure functions   |

| fun_defs.c Functions        | Descriptions |
| --------------------------- | ------------ |
| p_all_char(va_list chrArg)  |  print all characters - call write to SO | 
| p_all_int(va_list intArg)   |  print all integers                      |
| p_all_str(va_list strArg)   |  print all strings                       |

| writefun.c Functions        | Descriptions |
| --------------------------- | ------------ |
| write_to_SO(char c)         |  function that writes character to standard output |
| write_int(int n)            |  function that writes integer to standard output   |
| write_string(char *str)     |  function that writes string to standard output    |
  
</p>

<h2>Return Values</h2>
<p>
Upon successful return, _printf returns the number of characters printed (excluding the null byte used the end output to strings).
If an output error is encountered, a negative value is returned.
</p>
  
<h2>Examples</h2>
To print strings and characters:

``` 
_printf("Print %c%s", 'a', "string");
``` 

To print integers and decimal numbers:

``` 
_printf("%d%i", 1337, 9000);
``` 

<h2>Authors</h2>
<a href="https://github.com/ZeroDayPoke2">Chris Stamper</a> & <a href="https://github.com/spindouken">Mason Counts</a> & <a href="https://github.com/jobabyyy">Johanna Avila</a>
