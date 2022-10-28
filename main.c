#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int totesTotal;

    totesTotal = _printf("TEST %s %s TEST", "test", "this");
    printf("%d", totesTotal);
    return (0);
}
