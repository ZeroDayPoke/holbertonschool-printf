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
    _printf("TEST %s %s TEST", "test", "this");
    printf("%ld\n", strlen("TEST test this TEST"));
    printf("%d\n", totesWrite);
    return (0);
}
