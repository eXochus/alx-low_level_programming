#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: The string to be printed.
 *
 * Return: Void (no return value).
 */
void print_rev(char *s) 
{
    int len = 0;
    int i;

    while (*s != '\0') 
    {  
        len++;
        s++;
    }

    s--;

    for (i = len - 1; i >= 0; i--) 
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}

