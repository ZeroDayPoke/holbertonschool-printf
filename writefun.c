#include "main.h"

/**
 * write_int - function that writes ints to SO
 * @n: int to be printed
 * Return: number of chars in associated int
 */
int write_int(int n)
{
	int nCount = 0, intArr[10], sign = 0, drakkaris = 0, totesWrite = 0;
	char wOut;

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
			totesWrite += write(STDOUT_FILENO, "-", 1);
			sign = 0;
			drakkaris = 0;
		}
		wOut = (char)(intArr[nCount] + '0');
		totesWrite += write(STDOUT_FILENO, &wOut, 1);
		nCount--;
	}
	return (totesWrite);
}
