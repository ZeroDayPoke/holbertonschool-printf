<h1>printf Pseudocode</h1>

<p align="center">
<a href="#synopsis">Synopsis</a> | <a href="#get_started">Get Started</a> | <a href="#how_does_it_work?">How Does it Work?</a> | <a href="#conversion_specifiers">Format Characters</a> |<a href="#exhaustive_function_descriptions">Exhaustive Function Descriptions</a> | <a href="#return_values">Return Values</a> | <a href="#examples">Examples</a> | <a href="#authors">Authors</a>
</p>

<h2>Synopsis</h2>

The _printf function writes output to stdout, the standard output stream, according to a specified format.
All parts of the _printf function in this repository are there to ensure that the user can print integers, characters, and strings of characters all within one function.
Note: this printf does not support length modifiers, flag characters, precision, or field width.

<h3>Get Started</h3>
In the user's terminal, in the subdirectory where the user would like to install the new repository, type:
```httpx $ git clone https://github.com/ZeroDayPoke2/holbertonschool-printf.git
```

<h4>How Does it Work?</h4>

<h5>Format Characters</h5>
There are characters which specify which conversion will be applied. These are called format characters. Format characters are utilized upon detecting a \fB%\fR character.
The format character is required according to data type in order for the function to properly display different inputs (char, int, and string).

<h6>Exhaustive Function Descriptions</h6>

<h7>Return Values</h7>
Upon successful return, _printf returns the number of characters printed (excluding the null byte used the end output to strings).
If an output error is encountered, a negative value is returned.

<h8>Examples</h8>

<h9>Authors</h9>
