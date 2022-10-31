#include "main.h"

/**
 * write_to_SO - function that writes a char to SO
 * @c: character to be written
 * Return: 1 on successful stdout write
 */
int write_to_SO(char c)
{
	return (write(1, &c, 1));
}

/**
 * write_int - function that writes ints to SO
 * @n: int to be printed
 * Return: number of chars in associated int
 */
int write_int(int n)
{
	int nCount = 0, intArr[10], sign = 0, drakkaris = 0, totesWrite = 0;

	if (n == -2147483648)
	{
		n = 2147483647;
		drakkaris = 1;
	}
	if (n < 0)
	{
		n = n * -1;
		sign = 1;
	}
	while (n > 9)
	{
		intArr[nCount] = (n % 10);
		nCount++;
		n /= 10;
	}
	if (drakkaris == 1)
	{
		intArr[0] = 8;
	}
	intArr[nCount] = (n % 10);
	while (nCount >= 0)
	{
		if (sign == 1 || drakkaris == 1)
		{
			totesWrite += write_to_SO('-');
			sign = 0;
			drakkaris = 0;
		}
		totesWrite += write_to_SO(intArr[nCount] + '0');
		nCount--;
	}
	return (totesWrite);
}

/**
 * write_string - writes string to SO
 * @str: pointer input argument (str herein)
 * Return: number of chars in associated str
 */
int write_string(char *str)
{
	int a = 0, totesWrite = 0;

	while (*(str + a) != '\0')
	{
		totesWrite += write_to_SO(*(str + a));
		a++;
	}
	return (totesWrite);
}
