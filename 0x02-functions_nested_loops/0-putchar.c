#include "main.h"

/**
 * main function - prints _putchar followed by a line
 * Return: 0 (success)
 */

int _putchar(char c)
{
	c = '_putchar';
	return (write(1, &c, 1));
}

