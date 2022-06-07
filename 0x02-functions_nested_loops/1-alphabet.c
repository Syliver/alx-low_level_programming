#include <main.h>

/**
 * print_alphabet(void):- prints aplhabets, in lowercase
 */

void print_alphabet(void)
{

	char ch;

	ch = 'a';

	while(ch <= 'z')
	{
		_putchat(ch);
		ch++;
	}

	_putchar('\n');


	return (0);

}
