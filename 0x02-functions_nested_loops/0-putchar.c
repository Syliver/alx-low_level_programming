#include <unistd.h>
#include "main.h"

/**
 * main function
 * Return: 0 (success)
 */

int _putchar(char _putchar)
{
	return (write(1, &_putchar,1));	
}
